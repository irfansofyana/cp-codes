#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
int ans;
int A[105][105];

int main(){
	cin.tie(0);
	while (cin >> n) { 
		ans = 0;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				cin >> A[i][j];			
			}
		}
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				for (k = 0 ; k < n ; k++) {
					if ((i<j && j<k) || (i>j && j>k)) {
						if (A[i][j]==1 && A[j][k]==1 && A[k][i]==1) {
							cout << i+1 << " " << j+1 << " " << k+1 << endl;
							ans++;
						}
					}
				}
			}
		}
		cout << "total:" << ans << endl;
		cout << endl;
	}
	return 0;
}