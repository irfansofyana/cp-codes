#include <bits/stdc++.h>
using namespace std;

string s,akhir,awal;
int n,i,j;
int te,tt,pangkat;

int ubah(string s){
	stringstream ss(s);
	int res;
	return ss >> res ? res : 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> s;
	tt = s.find('.');
	te = s.find('e');
	awal = s.substr(0, tt);
	akhir = s.substr(tt+1,te-(tt+1));
	pangkat = ubah(s.substr(te + 1, (int)s.size()-(te+1) ) );
	if (pangkat >= (int)akhir.size()) {
		cout << awal << akhir;
		for (i = 0 ; i < pangkat-(int)akhir.size(); i++) cout << '0'; cout << '\n';
	}
	else {
		if (akhir == "0") {
			if (pangkat == 0) {
				cout << awal ;
			}
		}
		else {
			cout << awal << akhir.substr(0,pangkat);
			cout << '.' << akhir.substr(pangkat,(int)akhir.size()-pangkat);	
		}
		cout << '\n';
	}
	return 0;	
}
