#include <bits/stdc++.h>
using namespace std;

int t,n,m,i,j;
string s;
map<char,int> _last;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n >> m >> s;
		int ans = 0;
		_last.clear();
		for (i = 0 ; i < s.size(); i++) {
			if (i==0) {
				_last[s[i]] = i+1;
			}
			else {
				if (_last[s[i]]==0) _last[s[i]] = i+1;
				else {
					if ((i+1)-_last[s[i]] >= 1 && (i+1)-_last[s[i]] <= m) {
						ans++; 
						_last[s[i]] = i+1;
					}
					else _last[s[i]] = i+1;
				}
			}
		}
		cout << "Case " << ++tc << ": " << ans << '\n';
	}
	return 0;
}