#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
vector<ll> arr;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >>n, n > 0){
		arr.clear();
		for (i = 0 ; i < n ; i++){
			cin >> j;
			arr.push_back(j);
		}
		sort(arr.begin(),arr.end());
		ll ans = 0;
		for (i = 0 ; i < n-1 ; i++){
			for (j = i+1 ; j < n; j++) {
				ll lokasi = upper_bound(arr.begin(),arr.end(),arr[i]+arr[j])-arr.begin();
				ans += (ll)arr.size()-lokasi;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}