#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int sudah[20];
int ambil[20];

bool cek(int x){
	if (x<=1) return false;
	for (int ii = 2 ; ii <= (int)sqrt(x); ii++){
		if (x%ii==0) return false;
	}
	return true;
}

void cari(int pos) {
	if (pos==n) {
		if (cek(ambil[n-1]+ambil[0])) {
			for (int z = 0 ; z < n ; z++) {
				cout << ambil[z];
				cout << (z==n-1 ? '\n' :' ');
			}
		}
	}
	else {
		if (pos==1) {
			for (int z = 2; z <= n ; z++) {
				if (cek(1+z)) {
					ambil[pos] = z;
					sudah[z] = true;
					cari(pos+1);
					sudah[z] = false;
				}
			}
		}
		else {
			for (int z = 1 ; z <= n; z++) {
				if (!sudah[z] && cek(z+ambil[pos-1])){
					ambil[pos] = z;
					sudah[z] = true;
					cari(pos+1);
					sudah[z] = false;
				}
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int tcc = 0; bool pertama = true;
	while (cin >> n) {
		sudah[1] = true; ambil[0] = 1;
		if (pertama) pertama = false;
		else cout << '\n';
		cout << "Case " << ++tcc << ":\n";
		cari(1);
	}
	return 0;
}