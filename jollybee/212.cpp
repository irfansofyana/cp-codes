#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,ans;

int main(){
	cin >> s;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]=='.') ans++;
		else if (s[i]=='X') ans --;
		else ans += 2;
		if (ans<0) break;
	}
	if (i==s.size()) cout << ans << '\n';
	else cout << -1 << '\n';
	return 0;
}