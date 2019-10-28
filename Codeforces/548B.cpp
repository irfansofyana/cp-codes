#include <bits/stdc++.h>
using namespace std;

int A[505][505];
int baris[505];
int maks,n,i,j,k,smt;
int m,q,x,y;
int temp,mt;

int main(){
	scanf("%d %d %d", &n, &m, &q);
	for (i=0;i<n;i++) 
		for (j=0;j<m;j++)
			scanf("%d",&A[i][j]);
	maks = 0;
	for (i=0;i<n;i++){
		j = mt = 0;
		while (j<m) {
			while (A[i][j]==0 && j<m) j++;
			if (j==m) break;
			temp = 1;
			k = j+1;
			while (A[i][k]==1 && k<m) {
				k++;
				temp++;
			}
			mt = max(mt,temp);
			j = k;
		}
		baris[i] = mt;
		maks = max(mt,maks);
	} 
	//printf("%d\n", maks);
	while (q--) {
		scanf("%d %d", &x, &y);
		x--; y--;
		A[x][y] = (A[x][y]+1)%2;
		if (A[x][y]==1) {
			j = smt = 0; 
			while (j<m) {
				while (A[x][j]==0 && j<m) j++;
				if (j==m) break;
				temp = 1;
				k = j+1;
				while (A[x][k]==1 && k<m) {
					k++;
					temp++;
				}
				smt = max(temp,smt);
				j = k;
			}
			if (baris[x]!=smt) baris[x] = smt;
			for (i=0;i<n;i++) {
				if (i==0) maks = baris[i];
				else if (baris[i]>maks) maks=baris[i];
			}
			printf("%d\n", maks);
		}
		else {
			j = smt = 0; 
			while (j<m) {
				while (A[x][j]==0 && j<m) j++;
				if (j==m) break;
				temp = 1;
				k = j+1;
				while (A[x][k]==1 && k<m) {
					k++;
					temp++;
				}
				smt = max(temp,smt);
				j = k;
			}
			if (smt!=baris[x]) {
				baris[x] = smt;
			}
			for (i=0;i<n;i++) {
				if (i==0) maks = baris[i];
				else if (baris[i]>maks) maks = baris[i];
			}
			printf("%d\n", maks);
		}
		/*for (i=0;i<n;i++) {
			for (j=0;j<m;j++)
				cout << A[i][j] << " ";
			cout << endl;
		}*/
	}
}
