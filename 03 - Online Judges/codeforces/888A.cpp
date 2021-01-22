#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, ans;
int arr[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	for (int i = 0 ; i < n ; i++) {
		if (i == 0 || i == n-1) continue;
		int x = 0;
		if (arr[i] < arr[i-1] && arr[i] < arr[i+1]) x++;
		if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) x++;
		if (x >= 1) ans++;
	}
	cout << ans << '\n';
	return 0;
}