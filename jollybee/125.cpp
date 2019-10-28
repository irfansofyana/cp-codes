#include <bits/stdc++.h>
using namespace std;

int t,tc;
string s;

int main(){
	cin >> t;
	getchar();
	while (t--) {
		getline(cin,s);
		int ans = 0;
		for (int i = 0 ; i < s.size(); i++){
			if (s[i]=='A' || s[i]=='I' || s[i] == 'U' || s[i]=='E' || s[i]=='O'
			|| s[i]=='a' || s[i]=='i' || s[i]=='u' || s[i]=='e' || s[i]=='o') ans++;
		} 
		cout << "Kasus #" << ++tc << ": " << ans << '\n';
 	}
}