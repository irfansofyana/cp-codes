#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n;
int A[1005][1005];
int i,j,k;

void isi(){
	A[4][1] = 1; A[4][2] = 3; A[4][3] = 5; A[4][4] = 5;
	for (i = 5 ; i<=1000; i++) {
		for (j = 1; j <= i; j++) {
			for (k = 1 ; k<=j; k++) {
				A[i][j] += A[i-1][k];
				//A[i][j] %= 1000000;
			}
		}
	}
}

int main(){
	OPTIMASI
	memset(A,0,sizeof A);
	isi();
	while (cin >> n && n!=0) {
		int ans = 0;
		for (i = 1 ; i<=n ; i++) {
			ans += 	A[n][i];
			//ans %= 1000000;
		}
		if (n==3) cout << 5 << '\n';
		else cout << ans%1000000 << '\n';
	}
	return 0;
}