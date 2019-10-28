#include <bits/stdc++.h>
using namespace std;

int tc,n,m,i,j;
int A[10][10];
int B[10];
int mini;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> tc;
	while (tc--) {
		cin >> n;
		for (i = 0; i < n ; i++) 
			for (j = 0 ; j < n ; j++) cin >> A[i][j];
		for (i = 0 ; i < n; i++) B[i] = i;
		bool CAN = false;
		mini = 1000000000;
		do {
			int alice = 0;
			for (i = 0 ; i < n ; i++) {
				if (A[i][B[i]]<0) alice -= abs(A[i][B[i]]);
				else alice += A[i][B[i]];
			}
			mini = min(alice,mini);
		}while (next_permutation(B,B+n));
		cout << mini << '\n';
	}
	return 0;
}