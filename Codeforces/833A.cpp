#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a, b;
ll lo, hi;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		lo = 0; hi = (ll)1e6;
		ll bil = a*b;
		ll mid=-1;
		while (lo <= hi) {
			mid = (lo + hi)>>1;
			if (mid*mid*mid < bil) {
				lo = mid + 1;
			}
			else if (mid * mid * mid == bil) {
				break;
			}
			else hi = mid - 1;
		}
		if (mid != -1 && mid*mid*mid == bil) {
			if (a%mid == 0 && b%mid == 0) {
				ll tmp1 = a/mid;
				ll tmp2 = b/mid;
				if (tmp2 * tmp1 == mid) cout << "Yes\n";
				else cout << "No\n";
			}
			else cout << "No\n";
		}
		else cout << "No\n";
	}
	return 0;
}
abcddcba