#include <bits/stdc++.h>
using namespace std;

int tc,n,i,j,m,x,y,k;
char A[105][105];

int main(){
	cin.tie(0);
	cin >> tc;
	for (int z = 0 ; z< tc; z++) {
		cin >> n >> m >> x >> y;
		x--; y--; //basis 0
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < m ; j++)
				A[i][j] = '.';
		A[x][y] = '*';
		k = y-1;
		for (i = x-1 ; i>=0 ; i--) {
			A[i][k] = '*';
			k--;
		}
		k = y+1;
		for (i = x+1 ; i < n ; i++) {
			A[i][k] = '*';
			k++;
		}
		k = y+1;
		for (i = x-1 ; i>= 0 ; i--) {
			A[i][k] = '*';
			k++;
		}
		k = y-1;
		for (i = x+1; i < n ; i++) {
			A[i][k] = '*';
			k--;
		}
		for (i = 0 ; i < n ; i++){
			for (j = 0; j < m ; j++)
				cout << A[i][j];
			cout << endl;
		}
		if (z!=tc-1) cout << endl;
	}
	return 0;
}