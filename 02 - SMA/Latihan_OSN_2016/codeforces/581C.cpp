#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,k,i,j;
pll A[100005];

bool comp(pll a,pll b){
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++){
		ll x,y;
		cin >> x;
		y = (x/10) + 1;
		A[i] = mp(x,10*y-x);
	}
	sort(A,A+n,comp);
	while (k > 0) {
		ll frek = 0;
		for (i = 0 ; i < n ; i++) {
			if (A[i].first == 100) frek++;
			else {
				if (k >= A[i].second) {
					k-=A[i].second;
					A[i] = mp(10*(A[i].first/10)+10,10);
				}
				else {
					k = 0;
					break;
				}
			}
		}
		if (frek==n) break;
	}
	ll ans = 0;
	for (i = 0 ; i < n ; i++) {
		ans += A[i].first/10;
	}
	cout << ans << '\n';
	return 0;
}