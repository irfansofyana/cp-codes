#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
int A[100][100];
map<int,int> mep;

void isi(){
	for (i = 1 ; i<= 99; i++) {
		A[i][1] = 1;
		A[i][i] = 1;
	}
	for (i = 2 ; i <= 99 ; i++) {
		if (i%2==0) {
			for (j = 2 ; j<= i-1 ; j++) 
				A[i][j] = A[i-1][j-1]-A[i-1][j];
		}
		else {
			for (j = 2 ; j<= i-1 ; j++) 
				A[i][j] = A[i-1][j-1]+A[i-1][j];
		}
	}
	for (i = 1 ; i<=99 ; i++) {
		for (j = 1 ; j<=i ; j++) {
			if (mep[A[i][j]]==0) mep[A[i][j]] = i;
		}
	}
}

int main(){
	OPTIMASI
	isi();
	cin >> t;
	while (t--) {
		cin >> n;
		cout << mep[n] << '\n';
	}
	return 0;
}