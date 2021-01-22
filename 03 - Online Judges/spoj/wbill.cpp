#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

int t;
ll n,m,k,i,j;
ll pr[] = {2,3,5,7};
pll batas[] = {{1,100},{101,1000},{1001,10000},{10001,1000000},{1000001,(ll)2e9 + 100}};

ll price(ll x){
	if (x >= 1 && x <= 100) return x * 2;
	if (x >= 101 && x <= 1000) return 200 + (x - 100) * 3;
	if (x >= 1001 && x <= 10000) return 200 + 2700 + (x - 1000)*5;
	if (x >= 10001 && x <= 1000000) return 200 + 2700 + 45000 + (x - 10000)*7;
	return 200 + 2700 + 45000 + 7 * 990000 + (x - 1000000) * 11; 
}

pll tentukan(ll x){
	if (x == 0) return {2,0};
	if (x == 1) return {3,-100};
	if (x == 2) return {5,-2100};
	if (x == 3) return {7,-22100};
	if (x == 4) return {11,-4022100};
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cout << price(1000001) << " " << abs(price(1000000) - price(1)) << '\n';
	//cout << price(1000000) << " " << price(1) << '\n';
 	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n >> m;
		ll awal = 0, akhir = (ll)2e9;
		ll x = 0,y = 0;
		if (n == 0) {
			cout << "Case #" << ++tc << ": " << 0 << " " << 0 << '\n';
			cout << '\n';
			continue;
		}
		while (awal <= akhir) {
			ll mid = (awal + akhir)/2;
			//cout << mid << " " << price(mid) << '\n';
			if (price(mid) > n) akhir = mid - 1;
			else if (price(mid) < n) awal = mid + 1;
			else {
				k = mid;	// x + y = k
				break;
			}
		}
		//cout << k << '\n';
		bool found = false;
		//ll x,y;
		for (i = 0 ; i < 5 ; i++) {
			for (j = i ; j < 5 ; j++) {
				if (batas[i].fi + batas[j].fi <= k && k <= batas[i].se + batas[j].se) {
					//cout << i 
					pll tmp1,tmp2;
					tmp2 = tentukan(i);	//Y
					tmp1 = tentukan(j);	//X
					if ((m + tmp2.se - tmp1.se + tmp2.fi*k)%(tmp1.fi + tmp2.fi) == 0) {
						x = (m + tmp2.se - tmp1.se + tmp2.fi*k)/(tmp1.fi + tmp2.fi);
						y = k - x;
						if (x >= batas[j].fi && x <= batas[j].se && y >= batas[i].fi && y <= batas[i].se) {
							found = true;
						}
					}
				}
				if (found) break;
			}
			if (found) break;
		}
		//cout << x << " " << y << '\n';
		cout << "Case #" << ++tc << ": " << min(price(x),price(y)) << " " << max(price(x),price(y)) << '\n';
		cout << '\n';
	}
	return 0;
}