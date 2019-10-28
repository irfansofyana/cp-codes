#include <bits/stdc++.h>
using namespace std;

int A[105][105];
int n,m,i,j;

int main(){
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) 
		for (j = 0 ; j < m ; j++) 
			cin >> A[i][j];
	int r,c;
	c = 0;
	for (i = 0 ; i < m; i++) {
		r = n-1;
		for (j = 0 ; j < n ; j++) {
			cout << A[r][c];
			cout << (j==n-1 ? '\n': ' ');
			r--;
		}
		c++;
	}
	return 0;
}