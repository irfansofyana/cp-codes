#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll arr[505][505];
vector<ll> primes;
bool bil[((ll)1e+6)+5];
ll ans;

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2;  i <= 1000000; i++) {
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i * j <= 1000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	sieve();
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < m ; j++)
			cin >> arr[i][j];
	ans = (ll)2e+9;
	for (i = 0 ; i < n ; i++) {
		ll tmp = 0;
		for (j = 0 ; j < m ; j++) {
			ll cnt = lower_bound(primes.begin(),primes.end(),arr[i][j])-primes.begin();
			//cout << cnt << " ";
			tmp += primes[cnt]-arr[i][j];
		}
		//cout << '\n';
		//cout << tmp << '\n';
		ans = min(ans,tmp);
	}
	//cout << '\n';
	for (i = 0 ; i < m ; i++) {
		ll tmp = 0;
		for (j = 0 ; j < n ; j++) {
			ll cnt = lower_bound(primes.begin(),primes.end(),arr[j][i])-primes.begin();
			tmp += primes[cnt]-arr[j][i];
		}
		ans = min(ans,tmp);
	}
	cout << ans << '\n';
	return 0;
}