#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
struct paket{
	string gelar,awal,akhir,alamat,depart,hp,wp,cb;
};
int tc,n,i,j,prev,koma;
paket A[100005];
string s,temp,smt;

bool comp(paket a,paket b){
	return a.akhir < b.akhir;
}

int main(){
	OPTIMASI
	cin >> tc;
	getline(cin,s);
	i = 0;
	while (tc--){
		getline(cin,temp);
		while (getline(cin,s) && s.size()>0) {
			prev = 0; koma = s.find(",",prev); j = 0;
			A[i].depart = temp;
			while (koma>=0 && koma<s.size()) {
				smt = s.substr(prev,koma-prev);
				if (j==0) A[i].gelar = smt;
				else if (j==1) A[i].awal = smt;
				else if (j==2) A[i].akhir = smt;
				else if (j==3) A[i].alamat = smt;
				else if (j==4) A[i].hp = smt;
				else if (j==5) A[i].wp = smt;
				else if (j==6) A[i].cb = smt;
				j++;
				prev = koma+1; koma = s.find(",",koma+1);
			}
			smt = s.substr(prev,s.size()-prev);
			if (j==0) A[i].gelar = smt;
			else if (j==1) A[i].awal = smt;
			else if (j==2) A[i].akhir = smt;
			else if (j==3) A[i].alamat = smt;
			else if (j==4) A[i].hp = smt;
			else if (j==5) A[i].wp = smt;
			else if (j==6) A[i].cb = smt;
			i++;
		}
	}
	sort(A,A+i,comp);
	for (j = 0 ; j < i ; j++) {
		for (int z = 0 ; z < 40 ; z++) cout << '-';
		cout << endl;
		cout << A[j].gelar << " " << A[j].awal << " " <<A[j].akhir << endl;
		cout << A[j].alamat << endl;
		cout << "Department: " << A[j].depart << endl;
		cout << "Home Phone: " << A[j].hp << endl;
		cout << "Work Phone: " << A[j].wp << endl;
		cout << "Campus Box: " << A[j].cb << endl;
	}
	return 0;
}