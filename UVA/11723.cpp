#include <bits/stdc++.h>
using namespace std;

int tc,r,n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> r >> n) {
		if (r == 0 && n == 0) return 0;
		int ans = 0;
		cout << "Case " << ++tc << ": " ;
		if (n >= r) cout << ans << '\n';
		else {
			int temp = r-n;
			if (temp%n == 0) ans = temp/n;
			else ans = (temp/n)+1;
			if (ans > 26) cout << "impossible\n";
			else cout << ans << '\n';
		}
	}
	return 0;
}