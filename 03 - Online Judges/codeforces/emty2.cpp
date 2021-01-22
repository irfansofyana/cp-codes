#include <bits/stdc++.h>
using namespace std;

string s;
int tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> s;
		bool ans = true;
		if (s[0] == '0') ans = false;
		else {
			int nol = 0;
			int satu = 0;
			for (int i = 0 ; i < s.size(); i++) {
				if (s[i] == '0') nol++;
				else satu++;
				if (nol > 2*satu) {
					ans = false;
					break;
				}
			}
			if (nol != 2*satu) ans = false;
		}
		cout << "Case " << ++tc << ": " << (ans ? "yes" : "no") << '\n';
	}
	return 0;
}