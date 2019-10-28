#include <bits/stdc++.h>
using namespace std;

const int MAXN = (int)1e4;
int t,n,i,j;
string s[MAXN + 5];
map<string,bool> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		mep.clear();
		cin >> n;
		bool can = true;
		for (i = 0 ; i < n ; i++) {
			cin >> s[i];
			mep[s[i]] = true;
		}
		for (i = 0 ; i < n ; i++) {
			string res = "";
			for (j = 0 ; j < (int)s[i].size()-1; j++){
				res = res + s[i][j];
				if (mep[res]) {
					can = false;
					break;
				}
			}
			if (!can) break;
		}
		cout << (can ? "YES\n" : "NO\n");
	}
	return 0;
}