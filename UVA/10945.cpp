#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string s,asli,balik;

int main(){
	while (getline(cin,s) && s!="DONE") {
		//cout << s << endl;
		asli = ""; balik = "";
		for (i = 0 ; i < s.size() ;i ++) {
			if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) {
				if (s[i]>='A' && s[i]<='Z') asli = asli+char(int(s[i])+32);
				else asli = asli+s[i];
			}
		}
		for (i = s.size()-1; i >= 0; i--) {
			if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) {
				if (s[i]>='A' && s[i]<='Z') balik = balik+char(int(s[i])+32);
				else balik = balik+s[i];
			}
		}
		if (asli == balik) puts("You won't be eaten!");
		else puts("Uh oh..");
	}
	return 0;
}