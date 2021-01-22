#include <bits/stdc++.h>
#define fi first
#define se second
#define pb puhs_back
using namespace std;

int t,i,j;
string s;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> s;
		i = 0;
		int ans = 0;
		while (i < (int) s.size()) {
			string tmp = "";
			tmp = tmp + s[i];
			if (i + 1 < (int) s.size()) {
				tmp = tmp + s[i+1];
				if (tmp == "IV") { ans += 4; i += 2; continue;}
				if (tmp == "IX") { ans += 9; i += 2; continue;}
				if (tmp == "XL") { ans += 40; i += 2; continue;}
 				if (tmp == "XC") { ans += 90; i += 2; continue;}
				if (tmp == "CD") { ans += 400; i += 2; continue; }
				if (tmp == "CM") { ans += 900; i += 2; continue; }
			}
			tmp = ""; tmp = tmp + s[i];
			if (tmp == "I") ans++;
			if (tmp == "V") ans += 5;
			if (tmp == "X") ans += 10;
			if (tmp == "L") ans += 50;
			if (tmp == "C") ans += 100;
			if (tmp == "D") ans += 500;
			if (tmp == "M") ans += 1000;
			//cout << ans << '\n';
			i++;
		}
		cout << "Case " << ++tc << ": " << ans << '\n';
	}
	return 0;
}