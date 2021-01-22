#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int ans;
string alkohol[11]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
string s;

bool cari(string l){
	for (int z=0;z<11;z++) {
		if (alkohol[z]==l) return true;
	}
	return false;
}

int ubah(string k){
	int rs;
	stringstream ss(k);
	return ss >> rs ? rs:0;
}

int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++) {
		cin >> s;
		if (s[0]>='0' && s[0]<='9') {
			if (ubah(s)<18) ans++;
		}
		else if (cari(s)) ans++;
	}
	cout << ans << endl;
	return 0;
}
