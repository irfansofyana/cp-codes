#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n;
int maks, arr[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	maks = -1;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		maks = max(maks, arr[i]);
	}
	int ans = 0;
	for (int i = 0 ; i < n ; i++) {
		ans += maks - arr[i];
	}
	cout << ans << '\n';
	return 0;
}