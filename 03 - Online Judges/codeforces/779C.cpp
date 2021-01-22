#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

struct paket{
	ll awal, akhir, diff;	
};

ll n, k;
paket arr[200005];

bool comp(paket a, paket b){
	return a.diff < b.diff;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (int i = 0 ; i < n ; i++)
		cin >> arr[i].awal;
	for (int i = 0 ; i < n ; i++){
		cin >> arr[i].akhir;
		arr[i].diff = arr[i].awal - arr[i].akhir;
	}
	sort(arr, arr+n, comp);
	ll ans = 0;
	int i = 0;
	while (i < n && arr[i].diff <= 0) {
		ans += arr[i].awal;
		k--;
		i++;
	}
	while (k > 0) {
		ans += arr[i].awal;
		i++;
		k--;
	}
	while (i < n) {
		ans += arr[i].akhir;
		i++;
	}
	cout << ans << '\n';
	return 0;
}