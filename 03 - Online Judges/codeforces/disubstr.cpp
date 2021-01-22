#include <bits/stdc++.h>
using namespace std;

string s,temp;
int t,n,i,j;
map<string,int> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		mep.clear();
		int ans = 0;
		for (i = 0 ; i < s.size(); i++) {
			for (j = i ; j < s.size(); j++) {
				temp = s.substr(i,j-i+1);
				mep[temp]++;
				if (mep[temp]==1) ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}