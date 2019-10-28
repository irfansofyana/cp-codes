#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,c,i,j;
ll arr[100005];
int t;

bool bisa(ll x){
	ll i,j,k;
	k = 1;
	j = arr[0];
	i = 1;
	while (i < n) {
		while (i < n && arr[i]-j < x){
			i++;
		}
		if (i < n && arr[i]-j >= x){
			k++;
			j = arr[i];
			i++;
		}
	}
	return (k < c ? false:true);
}

ll binser(ll l,ll r){
	if (l==r) {
		if (bisa(l)) return l;
		return l-1;
	}
	ll mid = (l+r)/2;
	if (bisa(mid)) return binser(mid+1,r);
	return binser(l,mid);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> c;
		for (i = 0 ; i < n ; i++)
			cin >> arr[i];
		sort(arr,arr+n);
		cout << binser(0,(ll)1e+9) << '\n';
	}
	return 0;
}