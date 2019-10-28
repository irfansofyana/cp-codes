#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n,i,j;
string s,temp;
bool temu;

char lanjut(char c){
	if (c=='A') return 'D';
	else if (c=='D') return 'S';
	else if (c=='S') return 'A';
} 

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> s;
		cout << "Kasus " << ++tc << ": ";
		temu = true;
		for (i = 0 ; i < s.size(); i++) {
			if (i>0 && s[i]==s[i-1] && s[i]!='#') temu = false;
		}
		for (i = 0 ; i < s.size(); i++) {
			if (s[i]=='#') {
				temp = "";
				if (i-1>=0 && s[i-1]!='#') temp = temp+s[i-1];
				if (i+1<s.size() && s[i+1]!='#') temp = temp+s[i+1];
				if (temp.size()==0) s[i] = 'A';
				if (temp.size()==1) {
					if (i-1>=0) {
						if (s[i-1]=='A') s[i] = 'D';
						else s[i] = 'A';
					}
					else {
						if (s[i+1]=='A') s[i] = 'D';
						else s[i] = 'A';
					}
				}
				else if (temp.size()==2){
					if (temp[0]==temp[1]) {
						if (s[i-1]=='A') s[i]='D';
						else s[i] = 'A';
					}
					else if (temp[0]=='A' && temp[1]=='D') s[i] = 'S';
					else if (temp[0]=='D' && temp[1]=='A') s[i] = 'S';
					else if (temp[0]=='A' && temp[1]=='S') s[i] = 'D';
					else if (temp[0]=='S' && temp[1]=='A') s[i] = 'D';
					else if (temp[0]=='D' && temp[1]=='S') s[i] = 'A';
					else if (temp[0]=='S' && temp[1]=='D') s[i] = 'A';
				}
			}
		}
		if (temu) cout << s << '\n';
		else cout << "Bukan Ketikan Hucat ! ! !\n";
	}
	return 0;
}