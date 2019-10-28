#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = (int)1e6;

int t, n;
int arr[MAXN+2], maks, mini;
bool kanan[MAXN+2], kiri[MAXN+2];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i];
			if (i == 0) maks = arr[i];
			else {
				if (maks <= arr[i]) kiri[i] = 1;
				else kiri[i] = 0;
				maks = max(maks, arr[i]); 
			}
		}
		int ans=0;
		for (int i = n-1; i >= 0 ; i--) {
			if (i == n-1) mini = arr[i];
			else {
				if (mini >= arr[i]) kanan[i] = 1;
				else kanan[i] = 0;
				mini = min(mini, arr[i]);
			}
			if (i >= 1 && i < n-1 && kiri[i] && kanan[i]) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}