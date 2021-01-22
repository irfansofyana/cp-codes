#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	int i = 0; 
	int j = (int)s.size()-1;
	int ch = 0;
	while (i <= j) {
		if (i == j) {
			if (ch == 0) {
				cout << "YES\n";
				return 0;
			}
		}
		if (s[i] == s[j]) {
			i++; j--;
		}
		else {
			ch++;
			i++; j--;
		}
	}
	cout << ((ch == 1 || s.size() == 1) ? "YES" : "NO") << '\n';
	return 0;
}