#include <bits/stdc++.h>
using namespace std;

struct paket{
	string tebak;
	int n1,n2;
};
int t,tc,i,j;
paket A[3];
string s;
int x,y;
char warna[]={'G','B','Y','O','V','R'};
bool udah[10],_can;
int ambil[10];

int poss(char c){
	if (c=='G') return 0;
	else if (c=='B') return 1;
	else if (c=='Y') return 2;
	else if (c=='O') return 3;
	else if (c=='V') return 4;
	else return 5;
}

void permutasi(int pos){
	if (pos==4){
		string temp;
		int tempat[15];
		memset(tempat,-1,sizeof tempat);
		for (int z = 0; z < 4 ; z++) tempat[ambil[z]] = z;
		bool bisa = true;
		for (int z = 0 ; z < 2 ; z++){
			int smt[15];
			memset(smt,-1,sizeof smt);
			temp = A[z].tebak;
			for (int zz = 0; zz < 4 ; zz++) {
				smt[poss(temp[zz])] = zz;
			}
			int xx,yy;
			xx = yy = 0;
			for (int zz = 0 ; zz < 6 ; zz++){
				if (tempat[zz]!=-1 && smt[zz]!=-1) {
					if (tempat[zz]==smt[zz]) xx++;
					else yy++;
				}
			}
			if (xx!=A[z].n1 || yy!=A[z].n2) {
				bisa = false;
				break;
			}
		}
		if (bisa) _can = true;
	}
	else {
		for (int z = 0 ; z < 6 ; z++) {
			if (!udah[z]) {
				udah[z] = true;
				ambil[pos] = z;
				permutasi(pos + 1);
				udah[z] = false;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		for (i = 0; i < 2 ; i++){
			cin >> s >> x >> y;
			A[i].tebak = s; A[i].n1 = x; A[i].n2 = y;
		}
		memset(udah,false,sizeof udah);
		_can = false;
		permutasi(0);
		cout << (!_can ? "Cheat" : "Possible") << '\n';
	}
	return 0;
}