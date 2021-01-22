#include <bits/stdc++.h>
using namespace std;

struct paket{
	int tahun,tanggal,bulan;
	string nama;
};

int n,t,i,j;
paket A[110];
int tc,x,y,z,m;
char c;
string s;

bool comp(paket a,paket b){
	if (a.tahun==b.tahun) {
		if (a.bulan==b.bulan)
			return (a.tanggal<b.tanggal);
		return (a.bulan<b.bulan);
	}
	return (a.tahun<b.tahun);
}
int main(){
	tc = 1;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i=0;i<n;i++){
			cin >> x >> c >> y >> c >> z >> s;
			A[i].tanggal = y;
			A[i].bulan = x;
			A[i].tahun = z;
			A[i].nama = s;
		}
		sort(A,A+n,comp);
		cout << "Case #"<<tc<<": "<<A[m-1].nama<<endl;
		tc++;
	}
}
