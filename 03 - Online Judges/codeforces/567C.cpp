#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define OPTIMASI
using namespace std;

typedef long long ll;
const int N = 200000;

ll n,k,i,j,x;
map<ll,vector<ll>> mep;
ll arr[N + 5],bawah,atas;
ll kiri,kanan,ans;

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		mep[x].pb(i);
		arr[i] = x;
	}
	if (k == 1) {
		for (i = 0 ; i < n ; i++) {
			if (mep[arr[i]].size() > 0) {
				ll xx = mep[arr[i]].size();
				if (xx >= 3) ans += ((xx*(xx-1)*(xx-2))/6);
				mep[arr[i]].clear();
			}
		}
		cout << ans << '\n';
		return 0;
	}
	for (i = 0 ; i < n ; i++) {
		if (arr[i]%k == 0 && arr[i] != 0) {
			bawah = arr[i]/k;
			atas = arr[i]*k;
			kiri = upper_bound(mep[bawah].begin(), mep[bawah].end(), i) - mep[bawah].begin();
			kanan = lower_bound(mep[atas].begin(), mep[atas].end(), i+1) - mep[atas].begin();
		//	cout << kiri << " " << (ll)mep[atas].size()-kanan << '\n';				
			ans += kiri*((ll)mep[atas].size()-kanan);
		}
		else if (arr[i] == 0 && mep[0].size() > 0) {
			ll yy = mep[0].size();
			if (yy >= 3) ans += (yy*(yy-1)*(yy-2))/6;
			mep[0].clear();
		}
	}
	cout << ans << '\n';
	return 0;
}
