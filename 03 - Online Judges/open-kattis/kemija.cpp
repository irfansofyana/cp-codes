#include <bits/stdc++.h>
using namespace std;

string s,ans;
int i,j;
bool loncat;

bool Ifvokal(char c){
	if (c=='a' || c=='e' || c=='i' || c=='u' || c=='o') return true;
	return false;
}

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	getline(cin,s);
	ans = "";
	i = 0; loncat = false;
	while (i < s.size()) {
		if (s[i]!='p') {
			ans = ans+s[i];
			if (loncat) loncat = false;
			i++;
		}
		else if (s[i]=='p' && i==s.size()-1) {
			ans = ans+s[i]; i++;
		}
		else if (s[i]=='p') {
			if (Ifvokal(s[i+1])) {
				if (loncat) {
					ans = ans+s[i];
					loncat = false;
					i++;
				}
				else {
					loncat = true;
					i += 2;
				}
			}
			else {
				ans = ans+s[i];
				i++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}