#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
typedef long long ll;

using namespace std;

ll n,i,j;
ll tl,ta;
ll l1,l2,a1,a2;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> l1 >> a1 >> l2 >> a2 >> tl >> ta;
		ll x = a2*tl - l2*ta;
		ll y = l1*a2 - l2*a1;				
		if (y == 0) {
			//l1x + l2y = tl
			int tot = 0;
			ll bil = 1;
			for (int z = 1; z < (tl%l1 == 0 ? tl/l1 : (tl/l1) + 1); z++) {
				ll tt = tl - l1 * z;
				if (tt%l2 == 0) {
					tot++;
					bil = tt/l2;
				}
			}
			if (tot >= 2 || tot == 0) cout << '?' << '\n';
			else cout << (tl - l2*bil)/l1 << " " << bil << '\n'; 
		}
		else if (abs(x)%abs(y) != 0) cout << '?' << '\n';
		else {
			if ((x/y) <= 0) cout << '?' << '\n';
			else {
				ll ans1 = x/y;
				ll tmp = tl - l1*ans1;
				if (l2 == 0) cout << '?' << '\n';
				else {
					if (abs(tmp)%abs(l2) != 0) cout << '?' << '\n';
					else if (tmp/l2 <= 0) cout << '?' << '\n';
					else cout << ans1 << " " << tmp/l2 << '\n';			}
			}
		}
	}
	return 0;
}