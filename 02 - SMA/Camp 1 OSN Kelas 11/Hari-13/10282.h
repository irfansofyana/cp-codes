#include <bits/stdc++.h>
using namespace std;

map<string,string> mep;
int n,m,i,j,spasi;
string s,temp,a,b;

int main(){
	cin.tie(0);
	while (getline(cin,s)) {
		spasi = s.find(" ");
		a = s.substr(0,spasi); b = s.substr(spasi+1,s.size()-1-(spasi+1)+1);
		mep[b] = a;
	}
	while (cin >> s) {
		cout << mep[s] << endl;
	}
	return 0;
}