#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200000;

int n, arr[MAXN+2];
map<int,int> frek;
int ans;

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int i = 0, j = 0;
    while (j < n){
        ++frek[arr[j]];
        if (frek[arr[j]] >= 2){
            while (i < j && frek[arr[i]] == 1){
                --frek[arr[i]];
                ++i;
            }
            --frek[arr[j]];
            ++i;
        }else {
            ans = max(ans, j - i + 1);
        }
        ++j;
    }
    cout << ans << '\n';
    return 0;
}