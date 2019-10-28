#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,m,i,j;
string s;
bool ada;

ll gcd(ll a,ll b){
	return (b == 0 ? a : gcd(b,a%b));
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		n = 0; ada = false; m = 1;
		for (i = 0 ; i < s.size(); i++) {
			if (s[i] == '.') {
				ada = true;
			}
			else {
				n = 10 * n + (int)s[i] - '0';
				if (ada) m *= 10;
			}
		}
		cout << m/gcd(n,m) << '\n';		
	}
	return 0;
}
