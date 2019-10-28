#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
string s;
map<string,int> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		mep.clear();
		int ans = 0;
		while (n--) {
			cin >> s;
			mep[s]++;
			if (mep[s]==1) ans++;
			else {
				mep[s] = 0;
				ans--;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}