#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
string s[105];
map<string,int> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		int ans = 0;
		mep.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> s[i] ;
			mep[s[i]]++;
			if (mep[s[i]]==1) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}