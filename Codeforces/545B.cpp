#include <bits/stdc++.h>
using namespace std;

string s,t,ans;
int n,i,j,beda;
bool ganti;

int main(){
	cin >> s >> t;
	for (i=0;i<s.size();i++) 
		if (s[i]!=t[i]) beda++;
	if (beda%2==1) puts("impossible");
	else {
		ans="";
		ganti = false;
		for (i=0;i<s.size();i++) {
			if (s[i]==t[i]) ans = ans+s[i];
			else if (s[i]!=t[i] && !ganti) {
				ans = ans+t[i];
				ganti = true;
			}
			else if (s[i]!=t[i]) {
				ans = ans+s[i];
				ganti = false;
			}
		}
		cout << ans << endl;
	}
}
