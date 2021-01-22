#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int n,m,i,j;
pi arr[100];
int indeks,idx;
vector<int> jaw[1005];
int A[10];

bool bisa(int x,int y){	//x itu baris, y itu kolom (yang mau di check)
	for (int z = 0 ; z < idx; z++) {	//idx banyak nya ratu yang sudah ditempatkan
		int xx = arr[z].first;	//koordinat x, ratu yang sudah ditempatkan
		int yy = arr[z].second;	// koordinat y, ratu yang sudah ditempatkan
		if (xx==x || yy==y || abs(xx-x)==abs(yy-y)) return false; //cek kalo sama baris,kolom,diagonal
	}
	return true;
}

void generate(int kolom){
	if (kolom==8) {	//kalo udah beres semua kolom
		int ans[10];	// --> ans[i] itu menyatakan baris dimana ratu pada kolom ke i ditempatkan
		for (int z = 0 ; z < 8; z++) {
			ans[arr[z].second] = arr[z].first;
		}
		vector<int> smt;
		for (int z = 0 ; z < 8 ; z++) {
			smt.push_back(ans[z]);
		}
		jaw[indeks] = smt;	//jaw itu isinya semua konfigurasi penempatan 8 ratu yang mungkin
		indeks++
	}
	else {
		for (int z = 0 ; z < 8 ; z++) {
			if (bisa(z,kolom)) {	//cek penempatan ratu di baris z
				arr[idx] = make_pair(z,kolom);	//kalo valid, tambahin ke tempat ratu yang bakal dicoba selanjutnya
				idx++;	// tambahin banyaknya ratu yg sudah valid
				generate(kolom + 1);	//coba untuk kolom selanjutnya
				idx--;	// kurangin lagi banyaknya ratu yg sudah valid
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	indeks = 0; idx = 0;
	generate(0);
	int tc = 0;
	while (cin >> A[0]) {
		A[0]--;
		for (i = 1; i < 8 ; i++) {
			cin >> A[i];
			A[i]--;
		}
		int mini = 10000000;
		for (i = 0 ; i < indeks; i++) {
			int butuh = 0;
			for (j = 0 ; j < jaw[i].size(); j++){
				if (jaw[i][j]!=A[j]) butuh++; //kalo beda, berarti perlu pindah (+1) perubahan
			}
			mini = min(mini,butuh);	//update jawaban yang paling kecil
		}
		cout << "Case " << ++tc << ": " << mini << '\n';
	}
	return 0;
}