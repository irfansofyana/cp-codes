#include <bits/stdc++.h>
using namespace std;
struct paket{
	int awal,akhir;
};

int n,k,m,i,j,z;
vector<vector<int> > hubungan;
int x,y,k1,k2,k3,smt;
int bisa[4005][4005];
int tahu[4005],mini;
bool ada;
paket A[4005];

bool comp(paket c,paket d){
	if (c.awal==d.awal) return c.akhir<d.akhir;
	return c.awal<d.awal;
}

int main(){
	cin.tie(0);
	cin >> n >> m;
	hubungan.assign(5000,vector<int >());
	for (i = 0 ; i < m ; i++) {
		cin >> x >> y;
		bisa[x][y] = 1; bisa[y][x] = 1;
		tahu[x]++; tahu[y]++;
		A[i].awal = min(x,y); A[i].akhir = max(x,y);
		if (x>y) hubungan[y].push_back(x);
		else hubungan[x].push_back(y);
	}
	sort(A,A+m,comp);
	ada = false; mini = 2000000000;
	for (i = 0 ; i < m ; i++) {
		k1 = A[i].awal; k2 = A[i].akhir;
		for (j = 0 ; j < hubungan[k2].size() ; j++) {
			k3 = hubungan[k2][j];
			if (bisa[k1][k3]==1) {
				ada = true;
				smt = tahu[k1]+tahu[k2]+tahu[k3]-6;
				mini = min(smt,mini);
			}
		}
	}
	if (!ada) cout << -1 << endl;
	else cout << mini << endl;
	return 0;
}
