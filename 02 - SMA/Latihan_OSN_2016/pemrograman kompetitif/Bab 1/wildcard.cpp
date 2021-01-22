#include <bits/stdc++.h>
using namespace std;

string nama,s,depan,belakang;
int n,i,j;
int pos;

bool cek(string a,string b){
	for (int idx= 0 ; idx < b.size(); idx++){
		if (a[idx]!=b[idx]) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> s;
	pos = s.find('*');
	depan = s.substr(0,pos); belakang = s.substr(pos+1,(int)s.size()-(pos+1));
	
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> nama;
		if ((int)depan.size()+(int)belakang.size() > (int)nama.size()){continue;}
		if (cek(nama,depan)) {
			int idx = (int)nama.size()-1;
			bool tanda = true;
			for (j = (int)belakang.size()-1 ; j >= 0 ; j--) {
				if (nama[idx]!=belakang[j]) {
					tanda = false;
					break;
				}
				else idx--;
			}
			if (tanda) cout << nama << '\n';
		}
	}
	return 0;
}	
