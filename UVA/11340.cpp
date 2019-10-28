#include <bits/stdc++.h>
using namespace std;

int t,n,m,i,j;
map<char,double> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		mep.clear();
		for (i = 0; i < n ; i++) {
			char ch;
			cin >> ch >> m;
			mep[ch] = m/100.00;
		}
		cin >> n;
		string s;
		getline(cin,s);
		double ans = 0;
		while (n--) {
			getline(cin,s);
			for (i = 0 ; i < s.size(); i++){
				ans += mep[s[i]];
			}
		}
		cout << fixed << showpoint << setprecision(2);
		cout << ans << "$\n";
	}
	return 0;
}