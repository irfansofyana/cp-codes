#include <bits/stdc++.h>
using namespace std;
struct paket{
	int a,b;
};

int n,k,m,i,j,z;
vector<vector<int> > hubungan;
int x,y,k1,k2,k3,smt;
int tahu[4005],mini;
bool ada;
paket A[4005];

bool comp(paket c,paket d){
	if (c.a==d.a) return c.b<d.b;
	return c.a<d.a;
}

int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < m ; i++) {
		cin >> x >> y;
		tahu[x]++; tahu[y]++;
		A[i].a = min(x,y); A[i].b = max(x,y);
		if (x>y) hubungan[y].push_back(x);
		else hubungan[x].push_back(y);
	}
	sort(A,A+m,comp);
	ada = false; mini = 2000000000;
	for (i = 0 ; i < m ; i++) {
		k1 = A[i].a; k2 = A[i].b;
		for (j = 0 ; j < hubungan[k2].size() ; j++) {
			ada = true;
			k3 = hubungan[k2][j];
			smt = tahu[k1]+tahu[k2]+tahu[k3]-6;
			mini = min(mini,smt);
		}
	}
	if (!ada) cout << -1 << endl;
	else cout << mini << endl;
	return 0;
}
