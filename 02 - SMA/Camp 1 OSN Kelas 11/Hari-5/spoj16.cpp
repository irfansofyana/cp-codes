#include <bits/stdc++.h>
using namespace std;

int tc,n,i,j;
int ans;

int main() {
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n;
		ans = 0;
		while (n>=5) {
			ans += (n/5);
			n /= 5;
		}
		cout << ans << endl;
	}
	return 0;
}