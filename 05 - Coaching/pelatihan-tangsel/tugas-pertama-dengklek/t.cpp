#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;

const ll MOD = 1e9+7;

ll arr[1000100];
ll dp[2][1000100];
bool udah[1000100];

int main(){
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin>>n;

    for (ll i=1;i<=n;i++) {
        cin>>arr[i];
    }
    ll ans = 0;
    for (ll i=1;i<=n;i++) {
        dp[0][0] = 1;
        ll t = sqrt(arr[i]);
        // memset(udah,0,sizeof(udah));
        for (ll j=1;j<=min(i,t);j++) {
            dp[0][0] = 1;
            dp[1][j] = dp[0][j];
            if (arr[i] % j == 0) {
                // udah[j] = 1;
                dp[1][j] += dp[0][j-1];
                dp[1][j] %= MOD;
                if (j*j != arr[i]) {
                    ll x = arr[i]/j;
                    // udah[x] = 1;
                    dp[1][x] = dp[0][x];
                    dp[1][x] += dp[0][x-1];
                    dp[1][x] %= MOD;
                    dp[0][x] = dp[1][x];
                }
            }
            // cout<<dp[1][j]<<' ';
            dp[0][j-1] = dp[1][j-1];
            if (j==min(i,t)) dp[0][j] = dp[1][j];
        }
        // cout<<endl;
        /*for (ll j=1;j<=i;j++) {
            dp[0][j] = dp[1][j];
        }*/
    }
    for (int i=1;i<=n;i++) {
        // cout<<dp[1][i]<<' ';
        ans += dp[1][i];
        ans %= MOD;
    }
    // cout<<endl;

    cout<<ans<<endl;
}