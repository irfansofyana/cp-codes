#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, k;
int ans[505][505];
int sum, bil;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	bil = n*n;
	for (int i = 0 ; i < n ; i++) {
		int idx = n-1;
		for (int j = 0 ; j < n-k+1 ; j++) {
			ans[i][idx] = bil;
			if (idx == k-1) sum += bil;
 			bil--;
			idx--;
		}
	}
	for (int i = 0; i < n ; i++) {
		for (int j = k-2; j >= 0 ; j--) {
			ans[i][j] = bil;
			bil--;
		}
	}
	cout << sum << '\n';
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) {
			cout << ans[i][j];
			cout << (j == n-1 ? '\n' : ' ');
		}
	}
	return 0;	
}