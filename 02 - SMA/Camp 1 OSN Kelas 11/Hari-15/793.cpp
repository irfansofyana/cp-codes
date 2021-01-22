#include <bits/stdc++.h>
using namespace std;

int tc,t,n,i,j,spasi,sblm,a,b,berhasil,gagal;
int parent[100005],rank[100005];
string s,temp,c;
bool pertama;

int ubah(string l) {
	stringstream ss(l);
	int res;
	return ss >> res ? res :0;
}

int cari(int x) {
	if (x!=parent[x]) return cari(parent[x]);
	return x;
}

void gabung(int a,int b){
	int x,y;
	x = cari(parent[a]);
	y = cari(parent[b]);
	if (x!=y) { //still disjoint
		if (rank[x]>rank[y]) {
			parent[y] = x;
		}
		else {
			parent[x] = y;
			if (rank[x]==rank[y]) rank[y]++;
		}
	}
}

void resett(){
	memset(rank,0,sizeof rank);
	for (i = 1 ; i<= n ; i++) parent[i] = i; //inisialisasi
	berhasil = 0; gagal = 0;
}

int main(){
	cin.tie(0);
	cin >> tc; //pertama = true;
	while (tc--) {
		cin >> n;
		getchar(); resett();
		while (getline(cin,s)) {
			if (s.size()==0) break;
			spasi = s.find(" ", 0); 
			c = s.substr(0,spasi); 
			sblm = spasi+1; spasi = s.find(" ",spasi+1);
			a = ubah(s.substr(sblm,spasi-sblm));  b = ubah(s.substr(spasi+1,s.size()-(spasi+1)));
			if (c=="c") {
				gabung(a,b);
			}
			else {
				if (cari(a)!=cari(b)) gagal++;
				else berhasil++;
			}
		}
		cout << berhasil << ',' << gagal << endl; //ouput program
		if (tc!=0){
			cout << endl;
		}
 	}
	return 0;
}