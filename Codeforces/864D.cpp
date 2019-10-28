#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = 200000;

int n, arr[MAXN+5], belum[MAXN+5], freq[MAXN+5];
bool udh[MAXN+5];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	memset(udh, false, sizeof udh);
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		freq[arr[i]]++;
	}
	int blm = 0;
	for (int i = 1; i <= n ; i++){
		if (freq[i] == 0) {
			belum[blm] = i;
			blm++;
		}
	}
	int idx = 0;
	int ans = 0;
	for (int i = 0 ; i < n ; i++) {
		if (freq[arr[i]] == 1) continue;
		if (arr[i] > belum[idx]) {
			ans++;
			freq[arr[i]]--;
			arr[i] = belum[idx];
			idx++;
		}
		else if (arr[i] < belum[idx]) {
			if (!udh[arr[i]]) udh[arr[i]] = true;
			else {
				ans++;
				freq[arr[i]]--;
				arr[i] = belum[idx];
				idx++;
			}
		}
	}
	cout << ans << '\n';
	for (int i = 0 ; i < n; i++) {
		cout << arr[i];
		cout << (i == n-1 ? '\n' : ' ');
	}
	return 0;
}