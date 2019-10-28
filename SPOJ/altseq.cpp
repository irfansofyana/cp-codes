#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j;
int arr[5005];
int dp[5005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	int ans = 1;
	for (i = 0 ; i < n ; i++) {
		if (i == 0) dp[i] = 1;
		else {
			int tmp = 0;
			for (j = 0 ; j < i; j++) {
				if (arr[i] > 0 && arr[j] < 0 && abs(arr[j]) < arr[i]) tmp = max(tmp, dp[j]);
				if (arr[i] < 0 && arr[j] > 0 && abs(arr[j]) < abs(arr[i])) tmp = max(tmp, dp[j]);
			}
			dp[i] = tmp + 1;
			ans = max(ans, dp[i]);
		}
	}
	cout << ans << '\n';
	return 0;
}