#include <bits/stdc++.h>
using namespace std;

long long n,i,j,ukuran,ganti;
string s,temp;
string bil[20000];
long long tujuh,empat;

void isi_array(){
	long long idx,depan,belakang;
	bil[0] = "4"; bil[1] = "7";
	idx = 2; depan = 0; belakang = 1;
	for (i=2;i<=10;i++) {
		for (j=depan;j<=belakang;j++) {
			bil[idx] = '4'+bil[j];
			idx++;
		}
		for (j=depan;j<=belakang;j++) {
			bil[idx] = '7'+bil[j];
			idx++;
		}
		depan = belakang+1; belakang = 2*depan+1;
	}
	ukuran = idx;
}

long long ubah(string k){
	long long rs;
	stringstream ss(k);
	return ss >> rs ? rs:rs;
} 
int main(){
	cin.tie(0);
	isi_array();
	cin >> n;
	for (i=0;i<ukuran;i++) {
		ganti = ubah(bil[i]);
		if (ganti>=n) {
			empat = tujuh = 0;
			for (j=0;j<bil[i].size();j++) {
				if (bil[i][j]=='4') empat++;
				else tujuh++;
			}
			if (empat==tujuh) {
				cout << ganti << endl;
				return 0;
			}
		}
	}
	return 0;
}
