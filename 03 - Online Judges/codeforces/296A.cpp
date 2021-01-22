#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j;
int arr[105];
int frek[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		frek[j]++;
	}
	if (n == 1) {
		cout << "YES\n";
		return 0;
	}
	else {
		int maks = 0;
		int ans = 0;
		for (i = 1; i <= 1000; i++) {
			if (frek[i] > maks) {
				maks = frek[i];
				ans = i;
			}
		}
		int sum = 0;
		for (j = 1; j <= 1000; j++) {
			if (ans!=j && frek[j] != 0) sum+=frek[j];
		}
		if (sum < maks-1) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}