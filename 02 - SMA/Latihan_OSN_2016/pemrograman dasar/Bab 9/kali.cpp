#include <bits/stdc++.h>
using namespace std;

int n,m,p;
int i,j;
int A[105][105],B[105][105],C[105][105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> p;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < m ; j++)
			cin >> A[i][j];
	for (i = 0 ; i < m ; i++)
		for (j = 0 ; j < p ; j++)
			cin >> B[i][j];
	
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < p ; j++) {
			int sum = 0;
			for (int k = 0; k < m ; k++){
				sum += A[i][k] * B[k][j];
			}
			C[i][j] = sum;
		}
	for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < p ; j++){
			cout << C[i][j];
			cout << (j==p-1 ? '\n': ' ');
		}
	}
	return 0;
}