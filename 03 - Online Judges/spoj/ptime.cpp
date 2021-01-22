#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
vector<ll> primes;
bool mark[10005];
vector<pair<ll,ll> > ans;

void sieve(){
	memset(mark,true,sizeof mark);
	mark[0] = mark[1] = false;
	for (i = 2 ; i <= 10000 ; i++) {
		if (mark[i]) {
			primes.push_back(i);
			j = i;
			while (i *j <= 10000) {
				mark[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> n;
	for (i = 0 ; i < primes.size(); i++){
		if (primes[i] > n) break;
		else {
			ll freq = 0;
			j = n;
			while (j >= primes[i]) {
				freq += j/primes[i];
				j /= primes[i];
			}
			ans.push_back({primes[i],freq});
		}
	}
	for (i = 0 ; i < ans.size(); i++){
		cout << ans[i].first << "^" << ans[i].second;
		cout << (i == (ll)ans.size()-1 ? "\n" : " * ");
	}
	return 0;
}