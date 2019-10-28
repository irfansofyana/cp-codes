#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
vector<string> nama;
string s,query;

void cari(int pos,string res) {
	if (pos==(int)query.size()){
		cout << res << '\n';
	}
	else {
		if (query[pos]=='#') {
			for (int z = 0 ; z < nama.size(); z++)
				cari(pos + 1,res + nama[z]);
		}
		else {
			for (int z = 0 ; z < 10 ; z++)
				cari(pos + 1,res + char(z+'0'));
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		nama.clear();
		for (i = 0 ; i < n ; i++){
			cin >> s;
			nama.push_back(s);
		}
		cin >> m;
		while (m--) {
			cin >> query;
			cout << "--\n";
			cari(0,"");
		}
	}
	return 0;
}