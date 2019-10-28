#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,i,j;
ll arr[100005];
ll ans,maks,sudah;
ll res;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		maks = 0;
		for (i = 1 ; i <= n ; i++){
			cin >> arr[i];
			maks = max(maks,arr[i]);
		}
		ans = res = maks;
		sudah = 0;
		for (i = 1 ; i <= n ; i++)  {
			if (res >= arr[i]) {
				res--;
				sudah++;
			}
			else {
				ans += arr[i]-res;
				res = ans;
				res -= sudah;
				res--;
				sudah++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}