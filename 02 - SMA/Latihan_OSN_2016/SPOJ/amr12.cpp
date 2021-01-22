#include <bits/stdc++.h>
using namespace std;

int t,i,j;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		i = 0; j = (int)s.size()-1;
		while (i <= j){
			if (s[i]!=s[j]) break;
			else {i++; j--;}
		}
		cout << ((i > j) ? "YES" : "NO") << '\n';
	}
	return 0;
}