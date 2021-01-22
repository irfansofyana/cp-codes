#include <bits/stdc++.h>
using namespace std;

int n, k;
int coint[505];
int cnt[505][505];
int cnt1[505][505];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; ++i){
        cin >> coint[i];
    }
    sort(coint, coint + n);
    cnt[0][0] = 1;
    for (int i = 0; i < n; ++i){
        for (int j = 1; j <= k; ++j){
            for (int l = 0; l <= j; ++l){
                //jumlah = j
                //jumlah subset = l
                cnt1[j][l] = cnt[j][l];
                if (j >= coint[i]) {
                    cnt1[j][l] += cnt[j-coint[i]][l];
                    if (l >= coint[i]) {
                        cnt1[j][l] += cnt[j-coint[i]][l-coint[i]];
                    }
                } 
            }
        }
        for (int j = 1; j <= k; ++j){
            for (int l = 0; l <= j; ++l){
                cnt[j][l] = cnt1[j][l];
            }
        }
    }
    vector<int> ans;
    for (int i = 0; i <= k; ++i){
        if (cnt[k][i] != 0){
            ans.push_back(i);
        }
    }
    cout << ans.size() << '\n';
    for (auto a : ans){
        cout << a << " ";
    }cout << '\n';
    return 0;
}