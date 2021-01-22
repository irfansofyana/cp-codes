#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,i,j;
ll arr[100005];
ll bil,tmp;
bool udah[100005];

ll binser(ll l,ll r){
	ll ret = -1;
	while (l<=r){
		ll mid = (l+r)/2;
		if (arr[mid] == bil) {
			return mid;
		}
		else if (arr[mid] > bil) r = mid-1;
		else if (arr[mid] < bil) l = mid+1;
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++)
		cin >> arr[i];
	sort(arr,arr+n);
	ll ans = 0;
	memset(udah,false,sizeof udah);
	//cin >> bil;
	//cout << binser(0,n-1) << '\n';
	for (i = 0 ; i < n ; i++) {
		if (!udah[i]) {
			tmp = 1;
			if (k > 1) {
				bil = arr[i]*k;
				while (binser(0,n-1)!=-1) {
					tmp++;
					udah[binser(0,n-1)] = true;
					bil *= k;
				}
			}
			if (tmp%2==0) ans += tmp/2;
			else ans += (tmp+1)/2;
		}
	}
	cout << ans << '\n';
	return 0;
}