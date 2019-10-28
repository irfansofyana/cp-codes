#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[10000];
int x;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n;
		memset(A,0,sizeof A);
		for (i = 0 ; i < n ; i++) {
			cin >> j;
			A[j]++;
		}
		cin >> x;
		cout << "Kasus #" << ++tc << ": " ;
		if (A[x]==0) cout << "TIDAK ADA" << '\n';
		else cout << "ADA " << A[x] << " BOTOL DITEMUKAN" << '\n';
	}
	return 0;
}