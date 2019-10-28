#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
using namespace std;
typedef long long ll;

ll ans;
ll n,i,t,j;
ll prev;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		ans = 0;
		for (i = 1 ; i <= n ; i++) {
			ll x;
			cin >> x;
			if (i==1) {
				prev = x;
				j = 1;
			}
			else {
				if (x>=prev) {
					prev = x; j++;
				}
				else if (x<prev) {
					ans += (j*(j-1)/2); prev = x;
					j = 1;
				}
				if (i==n) ans += (j*(j-1))/2;
			}
		}
		ans += n;
		cout << ans << '\n';
	}
	return 0;
}