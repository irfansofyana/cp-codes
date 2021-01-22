#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5;

typedef long long LL;

LL a[MAXN+2];
LL b[MAXN+2];
LL dp[MAXN+2][3], c;
int n;


LL cari(int bil, int last){
    if (bil == 1) {
        if (last == 2) return c;
        else return 0;
    }
    if (dp[bil][last] != -1) return dp[bil][last];
    LL &ret = dp[bil][last];
    if (last == 0){
        ret = cari(bil-1, 1) + a[bil-1];
        ret = min(ret, cari(bil-1, 2) + b[bil-1]);
    }else {
        if (last == 1){
            ret = cari(bil-1, 1) + a[bil-1];
            ret = min(ret,cari(bil-1, 2) + b[bil-1]);
        }else if (last == 2) {
            ret = cari(bil-1, 1) + a[bil-1] + c;
            ret = min(ret, cari(bil-1, 2) + b[bil-1]);
        }
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> c;
    for (int i = 1; i <= n-1; ++i) cin >> a[i];
    for (int i = 1; i <= n-1; ++i) cin >> b[i];
    memset(dp, -1, sizeof dp);
    for (int i = 1; i <= n; ++i){
        cout << cari(i, 0) << " ";
    }
    return 0;
}