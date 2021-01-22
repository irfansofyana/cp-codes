#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, arr[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
	int ans = 0;
	int i = 0;
	bool pertama = false;
	int frek=0;
	while (i < n) {
		int j = i+1;
		frek = 1;
		while (j < n && arr[j] == arr[i]) {
			frek++;
			j++;
		}
		i = j;
		if (!pertama) {
			pertama = true;
		}
		else ans += frek;
	}
	if (ans > 0) ans -= frek;
	cout << ans << '\n';
	return 0;
}
