#include <bits/stdc++.h>
using namespace std;

int n, x;
int h[1002], s[1002];
int dp[2][100005];

int main(){
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &h[i]);
    }
    for (int i = 1; i <= n; ++i){
        scanf("%d", &s[i]);
    }
    // 0->tidak ambil, 1->ambil
    for (int i = 1; i <= n; ++i){
        for (int j = 0; j <= x; ++j){
            if (j >= h[i]){
                dp[i%2][j] = s[i] + dp[(i+1)%2][j-h[i]];
                dp[i%2][j] = max(dp[i%2][j], dp[(i+1)%2][j]);
            } else {
                dp[i%2][j] = dp[(i+1)%2][j];
            }
        }
    }

    cout << dp[n%2][x] << '\n';
    return 0;
}