#include <bits/stdc++.h>
using namespace std;

int t,i,j;
map<char,int> mep;

void isi(){
	mep['A'] = 1; mep['C'] = 0; mep['E'] = 0; mep['G'] = 0; mep['I'] = 0; mep['K'] = 0;
	mep['B'] = 2; mep['D'] = 1; mep['F'] = 0; mep['H'] = 0; mep['J'] = 0; mep['L'] = 0;
	mep['M'] = 0; mep['N'] = 0; mep['O'] = 1; mep['P'] = 1; mep['Q'] = 1; mep['R'] = 1;
	mep['S'] = 0; mep['T'] = 0; mep['U'] = 0; mep['V'] = 0; mep['W'] = 0; mep['X'] = 0;
	mep['Y'] = 0; mep['Z'] = 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	isi();
	cin >> t;
	while (t--) {
		cin >> s;
		int ans = 0;
		for (i = 0 ; i < s.size(); i++) {
			ans += mep[s[i]];
		}
		cout << ans << '\n';
	}
	return 0;
}