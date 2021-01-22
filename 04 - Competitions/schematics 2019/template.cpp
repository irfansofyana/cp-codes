// Sudah dibaca : irfan
// Topik        : bit

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;

int n, arr[MAXN+3];
long long res;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    res = 0;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    long long  bil = 1;
    for (int i = 0; i <= 32; ++i){
        int ada = 0;
        bool can = true;
        for (int j = 0; j < n && can; ++j){
            if (j == 0) {
                ada = ((arr[j]&bil) > 0);
            }else {
                long long tmp = ((arr[j]&bil) > 0);
                if (tmp != ada) can = false;
            }
        }
        if (!can) res += bil;
        bil *= 2;
    }
    cout << res << '\n';
    return 0;
}

