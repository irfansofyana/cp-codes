#include <bits/stdc++.h>
using namespace std;

string s;
int i,j;

int main(){
	getline(cin,s);
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]>='A' && s[i]<='Z') {
			if (s[i]>='A' && s[i]<='M') cout << char((int)s[i]+13);
			else cout << char((int)s[i]-13);
		}
		else if (s[i]>='a' && s[i]<='z'){
			if (s[i]>='a' && s[i]<='m') cout << char((int)s[i]+13);
			else cout << char((int)s[i]-13);
		}
		else cout << s[i];
	}
	cout << '\n';
	return 0;
}