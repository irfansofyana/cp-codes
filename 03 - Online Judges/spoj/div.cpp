#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

pll arr[10];
ll i,j;
vector<ll> ans;
ll primes[] = {2,3,5,7,11,13,17,19};
ll batas[20];


ll sqr(ll x){
	return x*x;
}

ll power(ll a,ll b){
	if (b == 0) return 1;
	else if (b == 1) return a;
	else if (b%2 == 0) return sqr(power(a,b/2));
	else return a*(sqr(power(a,(b-1)/2)));
}

inline void solve(){
	arr[0] = {1,2};
	arr[1] = {1,4};
	arr[2] = {1,6};
	arr[3] = {1,10};
	arr[4] = {2,4};
	arr[5] = {2,6};
	arr[6] = {4,6};
	arr[7] = {4,10};
	batas[2] = 19;
	batas[3] = 12;
	batas[5] = 8;
	batas[7] = 7;
	batas[11] = 5;
	batas[13] = 5;
	batas[17] = 4;
	batas[19] = 4;
	for (ll it = 0 ; it < 7 ; it++) {
		
		for (i = 0 ; i < 8; i++) {
			for (j = 0 ; j < 8; j++) {
				if (i != j) {
					if (batas[primes[i]] >= arr[it].first && batas[primes[j]] >= arr[it].second) {
						if (power(primes[i],arr[it].first) * power(primes[j],arr[it].second) <= 1000000) {
							ans.push_back(power(primes[i],arr[it].first) * power(primes[j],arr[it].second));
						}
					}
				}
			}
		}
		
	}
	sort(ans.begin(),ans.end());
	for (i = 0 ; i < ans.size(); i++){
		cout << ans[i] << '\n';
	}
}

int main(){
	solve();
	return 0;
}