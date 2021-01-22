#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll x,y,l,r;
ll batasx,batasy;
ll a,b,bil,i,j;
vector<ll> arr;
map<ll,int> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> x >> y >> l >> r;
	batasx = 1;
	while (batasx <= r) {
		if (batasx > r/x) break;
		else batasx *= x;
		a++;
	} 
	batasy = 1;
	while (batasy <= r) {
		if (batasy > r/y) break;
		else batasy *= y;
		b++;
	}
	//cout << a << " " << b << '\n';
	batasx = 1; batasy = 1;
	for (i = 0 ; i <= a; i++) {
		batasy = 1;
		for (j = 0 ; j <= b; j++) {
			bil = batasx + batasy;
			if (bil > r) break;
			if (l <= bil && bil <= r && mep.find(bil) == mep.end()){
				mep[bil] = 1;
				arr.pb(bil);
			} 
			batasy *= y;
		}
		batasx *= x;
	}
	sort(arr.begin(), arr.end());
	//for (int z = 0 ; z < arr.size(); z++) cout << arr[z] << " "; cout << '\n';
	ll awal = l;
	ll akhir;
	ll ans = 0;
	for (i = 0 ; i < arr.size(); i++) {
		if (i == 0) {
			akhir = arr[i]-1;
			if (awal <= akhir) ans = max(ans, akhir - awal + 1);
		}
		else {
			akhir = arr[i]-1;
			awal = arr[i-1] + 1;
			if (awal <= akhir) ans = max(ans, akhir - awal + 1);
		}
	}
	if ((int)arr.size() >= 1) {
		awal = arr[(int)arr.size()-1] + 1; akhir = r;
		if (awal <= akhir) ans = max(ans, akhir - awal + 1);
	}
	else ans = r-l+1;
	cout << ans << '\n';
	return 0;
}