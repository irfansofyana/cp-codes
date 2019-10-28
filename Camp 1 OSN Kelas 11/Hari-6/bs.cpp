#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[100];

int bs(int awal,int akhir,int cari){
	int mid = (awal+akhir)/2;
	if (awal>akhir) return -1;
	else if (A[mid]==cari) return mid;
	else if (A[mid]<cari) return bs(mid+1,akhir,cari);
	else if (A[mid]>cari) return bs(awal,mid-1,cari);
}

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i];
	}
	sort(A,A+n);
	cin >> j;
	while (j--) {
		cin >> i;
		cout << bs(0,n-1,i) << endl;
	}
	return 0;
}