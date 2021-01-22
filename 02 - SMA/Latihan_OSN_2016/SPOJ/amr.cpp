#include <bits/stdc++.h>
using namespace std;

int t,n,i,j,k;
int arr[20005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (i = 0 ; i < n ; i++) cin >> arr[i];
		sort(arr,arr+n);
		int ans = 2000000000;
		for (i = k-1 ; i < n ; i++) {
			if (arr[i]-arr[i-(k-1)] < ans) ans = arr[i]-arr[i-k+1];
		}
		cout << ans << '\n';
	}
	return 0;
}