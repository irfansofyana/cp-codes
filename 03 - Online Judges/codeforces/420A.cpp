#include <bits/stdc++.h>
using namespace std;

int depan,belakang;
string k;

bool cek(string s){
	depan = 0; belakang = s.size()-1;
	while (depan<=belakang) {
		if (s[depan]!=s[belakang]) return false;
		else if (s[depan]==s[belakang]) {
			if (s[depan]!='A' && s[depan]!='H' && s[depan]!='I' && s[depan]!='M' && s[depan]!='O'
				&& s[depan]!='T' && s[depan]!='U' && s[depan]!='V' && s[depan]!='W' && s[depan]!='X' 
			&& s[depan]!='Y') return false;
		}	
		depan++; belakang--;
	};
	return true;
}
int main(){
	cin.tie(0);
	cin >> k;
	puts(cek(k)==true?"YES":"NO");
	return 0;
}
