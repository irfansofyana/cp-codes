#include <bits/stdc++.h>

using namespace std;

string s;
int ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (int i = 0 ; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o') ans++;
		}
		else {
			if ((s[i]-'0')%2 == 1) ans++;
		}
	}
	cout << ans << '\n';
	return 0;	
}