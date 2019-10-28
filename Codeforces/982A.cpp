#include <bits/stdc++.h>
using namespace std;

int n;
string s;
bool ganjil;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	int nol = 0;
	for (int i = 0 ; i < (int)s.size()-1; i++) {
		if (s[i] == '1' && s[i+1] == '1') {
			cout << "No\n";
			return 0;
		}
	}
	int tmp = 0;
	for (int i = 0 ; i < (int)s.size(); i++) {
		if (s[i] == '0') {
			nol++;
			if (i-1 >= 0 && s[i-1] == '1') tmp++;
			else if (i+1 < (int)s.size() && s[i+1] == '1') tmp++; 
		}
	}
	cout << (nol == tmp ? "Yes" : "No") << '\n';
	return 0;
}