#include <bits/stdc++.h>
using namespace std;

int tc,n,i,j,ans;
int smt,t,titik;
string s;

int main(){
	cin.tie(0);
	cin >> tc ;
	while (tc--) {
		cin >> n >> s;
		i  = 0;
		ans = 0;
		while (i<s.size()) {
			if (s[i]=='.') {
				ans++;
				i+=3;
			}
			else i++;
		}
		cout << "Case " << ++t << ": " << ans << endl;
	}
	return 0;
}
