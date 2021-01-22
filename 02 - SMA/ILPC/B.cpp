#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int t,i,j;
string s;
vector<string> ans;

bool cek(char c){
	return (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o');
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		bool can = true;
		ans.clear();
		i = 0;
		while (i < s.size()) {
			//cout << i << '\n';
			if (i == 0 && s[i] == 'N') {
				can = false;
				break;
			}
			else if (s[i] == 'N') {
				ans.pb("N");
				i++;
			}
			else if ((s[i] >= 'A'  && s[i]<='Z' ) || s[i] == 'f' || s[i] == 'j' || s[i] == 'l' || s[i] == 'q' || s[i] == 'v' || s[i] == 'x' || s[i] == 'c') {
				can = false;
				break;
			}
			else if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o') {
				string tt = "";
				tt = tt + s[i];
				ans.pb(tt);
				i++;
			}
			else {
				string ttt = "";
				ttt = ttt + s[i];
				if (i + 1 < s.size()) ttt = ttt + s[i + 1]; 
				else {
					can = false;
					break;
				}
				if (cek(s[i + 1])) {
					if (ttt != "yi" && ttt != "ye" && ttt != "wu" && ttt != "wi" && ttt != "we") {
						ans.pb(ttt);
						i += 2;
					}
					else {
						can = false;
						break;
					}
				}
				else {
					if (s[i] == 'w' || s[i] == 'y') {
						can = false;
						break;
					}
					if (s[i+1] != 'y') {
						can = false;
						break;
					}
					if (i + 2 < s.size()) {
						ttt = ttt + s[i+2];
						if (s[i+2] == 'i' || s[i+2] == 'e') {
							can = false;
							break;
						}
						else if (cek(s[i+2])){
							ans.pb(ttt);
							i += 3;
						}
						else {
							can = false;
							break;
						}
					}
					else {
						can = false;
						break;
					}
				}
			}
		}
		if (!can) cout << -1 << '\n';
		else {
			for (i = 0 ; i < ans.size(); i++) {
				cout << ans[i];
				if (i == (int)ans.size() - 1) cout << '\n';
				else cout << '-';
			}
		}
	}
	return 0;
}