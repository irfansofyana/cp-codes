#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

const ll MAXM = (ll)1e5;
const ll MOD = (ll)1e9 + 7;


ll N, M, K;
ll F[MAXM+5], G[MAXM+5];
pll arr[MAXM+5];

void precompute(){
	F[0] = 1; G[0] = 0;
	for (int i = 1; i <= MAXM; i++) {
		F[i] = G[i-1] + ( ((N-2)%MOD)*(F[i-1]%MOD))%MOD;
		G[i] = ( ((N-1)%MOD) * (F[i-1]%MOD))%MOD;
		F[i] %= MOD;
		G[i] %= MOD;
	}
}

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	if (b == 1) return (a%MOD);
	if (b%2 == 0) return sqr(pangkat(a,b/2)%MOD);
	if (b%2 == 1) return ((a%MOD)*sqr(pangkat(a,(b-1)/2)%MOD))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	precompute();
	cin >> N >> M >> K;
	for (int i = 0 ; i < K; i++) {
		cin >> arr[i].fi >> arr[i].se;
	}	
	ll ans = 1;
	for (int i = 0 ; i < K-1; i++) {
		ll banyak = arr[i+1].fi - arr[i].fi - 1;
		if (arr[i].se == arr[i+1].se) {
			ans *= G[banyak];
			ans %= MOD;
		}
		else ans *= F[banyak];
		ans %= MOD;
	}	
	ans *= pangkat((N-1)%MOD, M-arr[K-1].fi);
	cout << ans << '\n';
		return 0;
}