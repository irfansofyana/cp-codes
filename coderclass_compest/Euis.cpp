#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = (ll)1e9+7;

ll ans,i,j;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ans = 1;
	getline(cin,s);
	i = 0;
	while (i < s.size()) {
		if (s[i] == ' ' || (s[i] >= 'a' && s[i] <= 'z' && s[i]!='e')) {
			i++;
		}
		else if (s[i] == 'e' && i+1 < s.size() && s[i+1] == 'u') {
			ans *= 3;
			ans %= mod;
			i += 2;
		}
		else if (s[i] == 'e') {
			ans *= 2;
			ans %= mod;
			i++;
		}
	}
	cout << ans << '\n' ;
	return 0;
}
