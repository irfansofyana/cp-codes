#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()
using namespace std;

typedef long long ll;

int ada;
ll n,i,j,sum,harus,x1,y1,maks,kudu;
ll arr[505][505];
map<ll,ll> mep;
vector<ll> vec;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		sum = 0;
		for (j = 0 ; j < n ; j++){
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				x1 = i; y1 = j;
			}
			sum += arr[i][j];
		}
		mep[sum]++;
		if (mep[sum] == 1) {
			ada++;
			vec.pb(sum);
		}
	}
//	cout << ada << '\n';
	if (n == 1) {
		cout << 1 << '\n';
		return 0;
	}
//	cout << ada << '\n';
	if (ada != 2) cout << "-1\n";
	else {
		maks = 0;
		for (i = 0 ; i < vec.size(); i++) {
			if (mep[vec[i]] > maks) {
				maks = mep[vec[i]];
				harus = vec[i];
			}
			else if (mep[vec[i]] == maks && vec[i] > harus) harus = vec[i];
		}
		ada = 0;
		mep.clear();
		vec.clear();
		for (j = 0 ; j < n ; j++) {
			sum = 0;
			for (i = 0 ; i < n ; i++) {
				sum += arr[i][j];
			}
			mep[sum]++;
			if (mep[sum] == 1) {
				ada++;
				vec.pb(sum);
			}
		}
		maks = 0;
		for (i = 0 ; i < vec.size(); i++) {
			if (mep[vec[i]] > maks) {
				maks = mep[vec[i]];
				kudu = vec[i];
			}
			else if (mep[vec[i]] == maks && vec[i] > kudu) kudu = vec[i];
		}
	//	cout << ada << " " << kudu << " " << harus << '\n';
		if (ada != 2 || kudu != harus) cout << "-1\n";
		else {
			sum = 0;
			for (i = 0 ; i < n ; i++) sum += arr[x1][i];
			ll xx1 = kudu - sum;
			sum = 0;
			for (i = 0 ; i < n ; i++) sum += arr[i][y1];
			ll xx2 = kudu - sum;
			if (xx1 != xx2 || (xx1 <= 0 ) || (xx2 <= 0)) cout << -1 << '\n';
			else {
				arr[x1][y1] = xx1;
				sum = 0;
				for (i = 0 ; i < n ; i++) {
					sum += arr[i][i];
				}
				if (sum != kudu) cout << -1 << '\n';
				else {
					sum = 0;
					for (i = 0 ; i < n ; i++) {
						sum += arr[i][n-i-1];
					}
					if (sum != kudu) cout << -1 << '\n';
					else cout << xx1 << '\n';
				}
			}
		}
	}
	return 0;
}
