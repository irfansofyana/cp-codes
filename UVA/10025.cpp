#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef long long ll;

ll n,target,m;
ll i,j,lo,hi;
int t;

bool can(ll x){
	ll bil = (x*(x+1))/2;
	if (bil >= (bil-target)/2 && (bil-target)/2 >= 0) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> target;
		lo = 1; hi = (ll)1e9; n = (ll)1e9;
		while (lo <= hi) {
			ll mid = (lo + hi) >> 1;
			if (can(mid)) {
				n = mid;
				hi = mid-1;
			}
			else lo = mid+1;
		}
		while ((((n*(n+1))/2)-target)%2 != 0) n++;
		cout << n << '\n';
		if (t!=0) cout << '\n';
	}
	return 0;
}
