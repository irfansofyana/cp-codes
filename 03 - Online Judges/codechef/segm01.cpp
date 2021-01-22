#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;


int t,n,i,j;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		i = 0; n = 0;
		while (i < s.size()) {
			if (s[i] == '0') i++;
			else if (s[i] == '1') {
				n++;
				j = i+1;
				while (j < s.size() && s[j] == '1') j++;
				i = j;
			}
		}
		if (n == 1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}