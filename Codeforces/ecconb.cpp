#include <bits/stdc++.h>

using namespace std;

int t, n;
string s;
int ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		s = "";
		cin >> n;
		if (n%2 == 1){
			cout << n << '\n';
			continue;
		}
		while (n > 0) {
			if (n%2 == 0) s = '0' + s;
			else s = '1' + s;
			n/=2;
		}
		int res = 1;
		ans = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '1') ans += res;
			res *= 2;
		}
		cout << ans << '\n';
	}
	return 0;
}