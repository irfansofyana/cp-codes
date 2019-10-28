#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k,l;
int A[105][105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m) {
		if (n==0 && m==0) return 0;
		memset(A,0,sizeof A);
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < m ; j++) {
				cin >> A[i][j];
				if (A[i][j]==0) A[i][j] = 1;
				else A[i][j] = 0;
				if (i > 0) A[i][j] += A[i-1][j];
				if (j > 0) A[i][j] += A[i][j-1];
				if (i > 0 && j > 0) A[i][j] -= A[i-1][j-1];
			}
		int ans = 0;
		for (i = 0 ; i < n ; i++) {
			for (j = 0; j < m ; j++) {
				for (k = i ; k < n ; k++) {
					for (l = j ; l < m ; l++) {
						int x = A[k][l];
						if (i > 0) x -= A[i-1][l];
						if (j > 0) x -= A[k][j-1];
						if (i > 0 && j > 0) x += A[i-1][j-1];
						if (x == (k-i+1) * (l-j+1)) ans = max(ans,x);
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}