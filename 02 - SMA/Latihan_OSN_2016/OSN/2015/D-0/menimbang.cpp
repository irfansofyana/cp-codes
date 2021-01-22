#include <bits/stdc++.h>
using namespace std;

string s;
int n,k,i,j;

void timbang(int ukuran,int mulai){
	int bagi[5];
	memset(bagi,0,sizeof bagi);
	string cek;
	for (int z = 1 ; z <= 3 ; z++)
		bagi[z] += ukuran/3;
	if (ukuran%3==1) {
		bagi[3]++;
	}
	else if (ukuran%3==2) {
		bagi[2]++;
		bagi[1]++;
	}
	cout << "TIMBANG " << bagi[1] << " ";
	for (i = 1 ; i <= bagi[1]; i++) {
		cout << i + mulai -1 << " ";
	}
	cout << bagi[2] << " ";
	for (i = 1 ; i <= bagi[2]; i++) {
		cout << mulai + bagi[1] + i-1 ;
		cout << (i==bagi[2] ? '\n' : ' ');
	}
	fflush(stdout);
	cin >> cek;
	if (cek == "SAMA"){
		if (bagi[3]==1) {
			cout << "AMBIL " << mulai+bagi[1]+bagi[2] << '\n';
			fflush(stdout);
		}
		else timbang(bagi[3],mulai+bagi[1]+bagi[2]);
	}
	else if (cek == "KIRI") {
		if (bagi[1]==1) {
			cout << "AMBIL " << mulai << '\n';
			fflush(stdout);
		}
		else timbang(bagi[1],mulai);
	}
	else if (cek == "KANAN") {
		if (bagi[2]==1) {
			cout << "AMBIL " << mulai+bagi[1] << '\n';
			fflush(stdout);
		}
		else timbang(bagi[2],mulai+bagi[1]);
	}
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s ;
	cin >> n >> k;
	timbang(n,1);
	return 0;
}