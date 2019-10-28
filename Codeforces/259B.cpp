#include <bits/stdc++.h>
using namespace std;
int n,i,j;
int A[3][3];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (i = 0; i < 3 ; i++) {
		for (j = 0 ; j < 3 ;j++) {
			cin >> A[i][j];
		}
	}
	A[0][0] = (A[0][2]+A[2][0]+A[2][1]-A[1][0])/2;
	A[2][2] = A[0][2]+A[2][0]-A[0][0];
	A[1][1] = A[1][0]+A[2][0]-A[2][2];
	for (i = 0 ;i < 3 ; i++){
		for (j = 0 ; j < 3 ; j++){
			cout << A[i][j];
			cout << (j==2?'\n':' ') ;
		}
	}
	return 0;
}