#include <bits/stdc++.h>
using namespace std;

string s1,s2;
char bantuan;

int nilai(char c){
	if (c=='6') return 6;
	else if (c=='7') return 7;
	else if (c=='8') return 8;
	else if (c=='9') return 9;
	else if (c=='T') return 10;
	else if (c=='J') return 11;
	else if (c=='Q') return 12;
	else if (c=='K') return 13;
	else if (c=='A') return 14;
}

int main(){
	cin >> bantuan;
	cin >> s1 >> s2;
	if (s1[1]==s2[1]) {
		if (nilai(s1[0])>nilai(s2[0])) puts("YES");
		else puts("NO");
	}
	else if (bantuan==s1[1]) puts("YES");
	else puts("NO");
	return 0;
}
