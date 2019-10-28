#include <bits/stdc++.h>
#define OPTIMASI
using namespace std;

int n,i,j;
string s,tmp;
set<string> ans;

bool cek(char c){
	return ((c>='a' && c<='z')||(c>='A' && c<='Z'));
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	while (getline(cin,s)){
		i = 0; j = 0; tmp = "";
		while (j < s.size()){
			if (cek(s[j])) {
				if (s[j] >= 'A' && s[j] <= 'Z') tmp = tmp + char(s[j] + 32);
				else tmp = tmp + s[j];
				j++;
			}
			else {
				if (tmp!="") ans.insert(tmp);
				while (!cek(s[j])) j++;
				tmp = "";
			}
		}
		if (tmp!="") ans.insert(tmp);
	}
	for (set<string>::iterator it = ans.begin(); it != ans.end(); it++){
		cout << *it << '\n';
	}
	return 0;
}