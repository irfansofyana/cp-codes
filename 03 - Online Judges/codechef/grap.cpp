#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

int t;
ll n,k,i,j;
ll x;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> k;
		ll ans = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			if (x%k!=0) {
				ll temp1,temp2;
				temp1 = (x/k)*k;
				temp2 = ((x/k)+1)*k;
				if (temp1==0) ans += temp2-x;
				else ans += min(x-temp1,temp2-x);
			} 
		}
		cout << ans << '\n';
	}
	return 0;
}