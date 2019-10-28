#include <bits/stdc++.h>
using namespace std;

int n,i,j,q,x;
int A[100005];

int temu(int awal,int akhir,int cari){
	int tengah = (awal+akhir)/2;
	if (awal>akhir) return -1;
	else if (A[tengah]==cari) return tengah;
	else if (A[tengah]>cari) return temu(awal,tengah-1,cari);
	else if (A[tengah]<cari) return temu(tengah+1,akhir,cari);
}

int main(){
	cin.tie(0);
	cin >> n >> q;
	for (i = 0 ; i < n ;i++) cin >> A[i];
	sort(A,A+n);
	while (q--) {
		cin >> x;
		cout << temu(0,n-1,x) << endl;
	}
	return 0;
}