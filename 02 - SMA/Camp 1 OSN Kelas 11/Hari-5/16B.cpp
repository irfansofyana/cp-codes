#include <bits/stdc++.h>
using namespace std;
struct paket{
	long long banyak,frek;
};

long long x,y,n,m,i,j;
long long ans,maks;
paket A[25];

bool comp(paket a,paket b){
	return a.frek>b.frek;
}

int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < m ; i++) {
		cin >> x >> y;
		A[i].banyak = x; A[i].frek = y;
	}
	sort(A,A+m,comp);
	//for (i = 0 ; i < m ; i++) {
		//cout << A[i].banyak << " " << A[i].frek << endl;
	//}
	for (i = 0 ; i < m && n>0 ; i++) {
		if (n>=A[i].banyak) {
			n -= A[i].banyak;
			ans += A[i].banyak*A[i].frek;
		}
		else {
			ans+=n*A[i].frek;
			n = 0;
		}
	}
	cout << ans << endl;
	return 0;
}