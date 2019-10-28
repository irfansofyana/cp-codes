#include <bits/stdc++.h>
using namespace std;

string s;
int t,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		i = (int)s.size()-1;
		while (i>=0) {if (s[i]=='0') i--;
			else break;
		}
		for (j = i ; j >= 0 ; j--) {
			cout << s[j];
		}
		cout << '\n';
	}
	return 0;
}