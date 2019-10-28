#include <bits/stdc++.h>
using namespace std;

int A[5][5],B[5][5];
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
int i,j,x,y,k;

int main(){
	cin.tie(0);
	for (i = 0 ; i < 3 ; i++) {
		for (j = 0 ; j < 3 ; j++)
			cin >> A[i][j];
	}
	for (i = 0 ; i < 3 ; i++) 
		for (j = 0 ; j < 3 ; j++)
			B[i][j] = 1;
	for (i = 0 ; i < 3 ; i++) {
		for (j = 0 ; j < 3 ; j++) {
			for (k = 1 ; k <= A[i][j] ; k++) {
				if (B[i][j]==0) B[i][j] = 1;
				else B[i][j] = 0;
				for (int z = 0 ; z < 4; z++) {
					if (i+dx[z]>=0 && i+dx[z]<3 && j+dy[z]>=0 && j+dy[z]<3) {
						if (B[i+dx[z]][j+dy[z]]==1) B[i+dx[z]][j+dy[z]] = 0;
						else B[i+dx[z]][j+dy[z]] = 1;
					}
				}
			}
		}
	}
	for (i = 0 ; i < 3 ; i++) {
		for (j = 0 ; j < 3 ; j++)
			cout << B[i][j];
		cout << endl;
	}
	return 0;
}