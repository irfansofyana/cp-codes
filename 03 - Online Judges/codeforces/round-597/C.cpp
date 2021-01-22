#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int MOD = 1e9 + 7;

string s;
LL ans, dp[100005];

void preCompute(){
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i < 100005; ++i){
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    preCompute();
    cin >> s;
    ans = 1;
    int i = 0;
    while (i < s.size()){
        if (s[i] == 'w' || s[i] == 'm'){
            cout << 0 << '\n';
            return 0;
        }else if (s[i] == 'u' || s[i] == 'n') {
            int j = i;
            int frek = 0;
            while (j < s.size() && s[j] == s[i]){
                ++j; ++frek;
            }
            ans = (ans * dp[frek]) % MOD;
            i = j;
        }else {
            ++i;
        }
    }
    cout << ans << '\n';
    return 0;
}