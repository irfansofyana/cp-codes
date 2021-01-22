#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,t;
vector<int> temp;
int muter;
int A[25][25],B[25][25];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> t;
	while (t--) {
		cin >> m >> muter;
		for (i = 0 ; i < m ; i++) {
			for (j = 0 ; j < m ; j++) {
				cin >> A[i][j];
				B[i][j] = A[i][j];
			}
		}
		while (muter--) {
			for (i = 0 ; i < m ; i++) {
				temp.clear();
				for (j = m-1 ; j >= 0 ; j--) temp.push_back(A[j][i]);
				int idx = 0;
				for (j = 0 ; j < m ; j++) {
					B[i][j] = temp[idx];
					idx++;
				}
			}
			for (i = 0 ; i < m ; i++){
				for (j = 0 ; j < m ; j++)
					A[i][j] = B[i][j];
			}
		}
		int sum = 0;
		for (i = 0 ; i < m ; i++) sum += A[i][i];
		for (i = 0; i < m; i++ ) {
			sum += A[i][m-1-i];
		}
		cout << sum << '\n';
		for (i = 0 ; i < m ; i++) {
			for (j = 0 ; j < m ; j++) {
				cout << A[i][j];
				cout << (j==m-1?'\n':' ');
			}
		}
	}
	return 0;
}