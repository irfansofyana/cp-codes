#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;

long long k;
int q, n;
char arr[MAXN+10];
vector<int> pos;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> q;
    while (q--){
        pos.clear();
        cin >> n >> k;
        for (int i = 0; i < n; ++i){
            cin >> arr[i];
            if (arr[i] == '0') pos.push_back(i);
        }
        long long tmp = 0LL;
        int br = -1;
        long long sisa = 0;
        for (int i = 0; i < (int)pos.size(); ++i){
            if (tmp + pos[i]-i <= k){
                tmp += pos[i]-i;
            }else {
                br = i;
                sisa = k - tmp;
                break;
            }
        }
        if ((int)pos.size() == 0) {
            for (int i = 0; i < n; ++i){
                cout << arr[i];
            }
            cout << '\n';
            continue;
        }
        if (k >= pos[0] && br == -1) br = (int)pos.size(); 
        // cout << "xx " << br << " " << sisa << endl;
        if (br == 0){
            int ps = pos[0];
            while (sisa > 0 && ps >= 1){
                swap(arr[ps-1], arr[ps]);
                --sisa;
                --ps;
            }
        }else {
            int idx = 0;
            for (int i = 0; i < br; ++i){
                arr[idx] = '0';
                ++idx;
            }
            for (int i = 0; i < pos[br-1]+1 - br; ++i){
                arr[idx] = '1';
                ++idx;
            }
            int ps = pos[br];
            while (sisa > 0 && ps >= 1){
                swap(arr[ps-1], arr[ps]);
                --sisa;
                --ps;
            }
        }
        for (int i = 0; i < n; ++i){
            cout << arr[i];
        }
        cout << '\n';
    }
    return 0;
}