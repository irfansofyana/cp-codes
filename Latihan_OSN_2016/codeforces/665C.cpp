#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;

char cari(char a,char b){
	for (int z = 0; z < 26; z++){
		char cc = char(97 + z);
		if (cc!=a && cc!=b) return cc;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	i = 1;
	while (i < s.size()){
		if (s[i]!=s[i-1]) i++;
		else {
			if (i+1 < (int)s.size())s[i] = cari(s[i-1],s[i+1]);
			else s[i] = cari(s[i-1],s[i-1]);
			i++;
		}
	}
	cout << s << '\n';
	return 0;
}