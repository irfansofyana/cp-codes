#include <bits/stdc++.h>
using namespace std;

int t,n,m,i,j;
string s,namaa;

struct paket{
	string nama;
	int n1,n2,n3;
};

paket A[100];

bool comp(paket a,paket b){
	if (a.n3==b.n3) {
		if (a.n2==b.n2) return a.n1 > b.n1;
		return a.n2 > b.n2;
	}
	return a.n3 > b.n3;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cin >> namaa ;
		for (i = 0 ; i < n ; i++) {
			int s1,s2,s3;
			cin >> s >> s1 >> s2 >> s3;
			A[i].nama = s; A[i].n1 = s1; A[i].n2 = s2; A[i].n3 = s3;
		}
		sort(A,A+n,comp);
		for (i = 0 ; i < m ; i++) {
			if (A[i].nama==namaa) {
				cout << "YA\n";
				break;
			}
		}
		if (i==m) cout << "TIDAK\n";
	}
	return 0;
}