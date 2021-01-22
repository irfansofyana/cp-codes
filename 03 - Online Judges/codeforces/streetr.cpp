#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000;

int n, arr[MAXN+2];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	int fpb;
	for (int i = 0; i < n-1; i++) {
		if (i == 0) fpb = arr[i+1] - arr[i];
		else fpb = __gcd(fpb, arr[i+1]-arr[i]);
	}
	long long ans = 0;
	for (int i = 0 ; i < n-1; i++) {
		ans += (1LL*(arr[i+1]-arr[i])/fpb)-1;
	}	
	cout << ans << '\n';	
	return 0;
}