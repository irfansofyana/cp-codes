#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define mod 1000000
using namespace std;

int n,k,i,j;
long long C[210][210];

void isi(){
	C[1][0] = 1; C[1][1] = 1;
	for (i = 2 ; i <= 200 ; i++) {
		C[i][0] = 1; C[i][i] = 1;
	}
	for (i = 2 ; i <= 200 ; i++) {
		for (j = 1 ; j <= i-1 ; j++) {
			C[i][j] = (C[i-1][j-1]+C[i-1][j])%mod;
		}
	}
}

int main(){
	OPTIMASI
	isi();
	while (cin >> n >> k && n >0 && k > 0) {
		cout << C[n+k-1][n]%mod << '\n';
	}
	return 0;
}