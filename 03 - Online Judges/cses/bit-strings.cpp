#include <bits/stdc++.h>
using namespace std;

const long long MOD = (long long)1e9 + 7;

int n;
long long ans;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    ans = 1;
    for (int i = 1; i <= n; ++i){
        ans = (ans%MOD * 2) % MOD;
    }
    cout << ans << '\n';
    return 0;
}