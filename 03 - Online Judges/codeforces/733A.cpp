#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	int last = 0;
	int maks = -1;
	for (int i = 0 ; i < s.size(); i++) {
		if (s[i] == 'A' || s[i] == 'I' || s[i] == 'U' || s[i] == 'E' || s[i] == 'O' || s[i] == 'Y') {
			maks = max(maks, i+1 - last);
			last = i+1;
		}
	}
	maks = max(maks, (int)s.size()+1 -  last);
	cout << maks << '\n';
	return 0;
}