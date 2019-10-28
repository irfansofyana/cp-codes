#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,tc;
ll n,sum,A[1005];
ll target,i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> target >> n;
		sum = 0;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		sort(A,A+n);
		ll ans = 0;
		for (i = n-1; i>=0; i--) {
			sum += A[i];
			ans++;
			if (sum>=target) break;
		}
		cout << "Scenario #" << ++tc << ": " << '\n';
		if (sum<target) cout << "impossible" << '\n' << '\n';
		else cout << ans << '\n' << '\n';
	}
	return 0;
}