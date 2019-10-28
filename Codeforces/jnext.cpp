#include <bits/stdc++.h>
using namespace std;

int t;
int n, arr[1000005], brr[1000005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++){
			cin >> arr[i];
			brr[i] = arr[i];
		}
		sort(brr, brr+n);
		next_permutation(arr, arr+n);
		bool cek = true;
		for (int i = 0; i < n && cek ; i++) {
			if (arr[i] != brr[i]) cek = false;
		}
		if (cek) cout << -1 << '\n';
		else {
			for (int i = 0 ; i < n ; i++)cout << arr[i];cout << '\n';
		}
	}
	return 0;
}