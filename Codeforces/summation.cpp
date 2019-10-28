#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MOD = 100000007;

int t, tc;
ll n, arr[1005];
ll sum, ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		sum = 0;
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i];
			sum += arr[i];
			sum %= MOD;
		}
		ans = 1;
		for (int i = 0 ; i < n-1; i++) {
			ans *= 2;
			ans %= MOD;
		}
		ans = ans*sum; ans %= MOD;
		cout << "Case " << ++tc << ": " << ans << '\n';
	}
	return 0;
}