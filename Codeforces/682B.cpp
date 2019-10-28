#include <bits/stdc++.h>

using namespace std;

int n, arr[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ;  i < n ; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	int i = 0;
	int ans = 1;
	while (i < n) {
		if (arr[i] >= ans) {
			ans++;
			i++;
		}
		else {
			i++;
		}
	}
	cout << ans << '\n';
	return 0;
} 