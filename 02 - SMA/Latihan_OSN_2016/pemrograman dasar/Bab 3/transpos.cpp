#include <bits/stdc++.h>
using namespace std;

int A[5][5];
int i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (i = 0 ; i < 3; i++)
		for (j = 0 ; j < 3; j++)
			cin >> A[i][j];
	int r,c;
	c = 0;
	for (i = 0 ; i < 3 ; i++){
		r = 0;
		for (j = 0 ; j < 3 ; j++) {
			cout << A[r][c];
			cout << (j==2?'\n':' ') ;
			r++;
		}
		c++;
	}
	return 0;
}