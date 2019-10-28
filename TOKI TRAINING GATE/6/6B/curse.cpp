#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define eps 1e-15
#define INF 2e9
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;

int n,m,i,j,b,k,l;
int smt,maks,temp,batu;
int A[55][55],B[55][55];

int main(){
	_
	cin >> n >> m >> b;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j  < m ; j++) {
			cin >> A[i][j];
			if (A[i][j]==9999) B[i][j] = 1;
			else B[i][j] = 0;
			if (i>0) {
				A[i][j] += A[i-1][j];
				B[i][j] += B[i-1][j];
			}
			if (j>0) {
				A[i][j] += A[i][j-1];
				B[i][j] += B[i][j-1];
			}
			if (i>0 && j>0) {
				A[i][j] -= A[i-1][j-1];
				B[i][j] -= B[i-1][j-1];
			}
		}
	}
	/*for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < m; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) 
			cout << B[i][j] << " ";
		cout << endl;
	}*/
	for (i = 0 ; i < n ; i++) for (j = 0 ; j < m; j++) 
		for (k = i ; k < n ; k++) for (l = j ; l < m ; l++) {
			smt = A[k][l]; temp = B[k][l];
			if (i>0) {
				smt -= A[i-1][l];
				temp -= B[i-1][l];
			}
			if (j>0) {
				smt -= A[k][j-1];
				temp -= B[k][j-1];
			}
			if (i > 0 && j > 0) {
				smt += A[i-1][j-1];
				temp += B[i-1][j-1];
			}
			if (temp<=b) {
				smt -= temp*9999;
				if (smt>maks) {
					maks = smt;
					batu = temp;
				}
			}
			//if (i==0 && j==0 && k == n-1 && l==m-1) 
				//cout << smt << " " << maks << " " << temp << endl;
		}
	cout << maks << " " << batu << endl;
	return 0;
}