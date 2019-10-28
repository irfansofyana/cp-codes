#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

string s;
int i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i] == 'r') cout << i+1 << '\n';
	}
	for (i = (int)s.size()-1; i >= 0 ; i--) {
		if (s[i] == 'l') cout << i+1 << '\n';
	}
	return 0;
}