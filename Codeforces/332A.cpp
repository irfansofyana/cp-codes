#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
string s;

int main(){
	cin.tie(0);
	cin >> n >> s;
	i = 0;
	while (i<s.size()) {
		if (i-1>=0 && i-2>=0 && i-3>=0) {
			if (s[i-1]==s[i-2] && s[i-2]==s[i-3] && s[i-1]==s[i-3]) {
				ans++;
			}
		}
		i+=n;
	}
	cout << ans << endl;
	return 0;
}
