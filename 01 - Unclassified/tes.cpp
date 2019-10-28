#include <bits/stdc++.h>
using namespace std;

string s, tmp;

bool cek(string s) {
	int d = 0;
	int b = (int)s.size()-1;
	while (d <= b) {
		if (s[d] != s[b]) return false;
		else {
			d++;
			b--;
		}
	}
	return true;
}

int ans;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	ans = 0;
	for (int i = 0 ; i < s.size(); i++) {
		tmp = "";
		for (int j = i; j <= s.size(); j++) {
			tmp = tmp + s[j];
			if (cek(tmp)) ans = max(ans, j-i+1);
		}
	}
	cout << ans << '\n';
	return 0;
}