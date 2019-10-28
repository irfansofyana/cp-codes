#include <bits/stdc++.h>
using namespace std;

long long m,n,i,j;
long long A[50005][10];
long long akhir[10][50005];
long long maks,prev;
int main(){
	scanf("%I64d %I64d",&m,&n);
	for (i=1;i<=m;i++) 
		for (j=1;j<=n;j++)
			scanf("%I64d",&A[i][j]);
	for (i=1;i<=m;i++) {
		if (i==1) akhir[1][i] = A[1][1];
		else akhir[1][i] = akhir[1][i-1]+A[i][1]; 
	}
	for (i=2;i<=n;i++) {
		for (j=1;j<=m;j++) {
			if (j==1) akhir[i][j] = akhir[i-1][j]+A[j][i];
			else {
				if (akhir[i-1][j]>akhir[i][j-1]) akhir[i][j] = akhir[i-1][j]+A[j][i];
				else akhir[i][j] = akhir[i][j-1] + A[j][i];
			}
		}
	} 
/*	for (i=1;i<=n;i++) {
		for (j=1;j<=m;j++) 
			cout << akhir[i][j] <<" ";
		cout<<"\n";
	} */
	for (i=1;i<=m;i++) {
		if (i==m) printf("%I64d\n",akhir[n][m]);
		else printf("%I64d ",akhir[n][i]);
	}
	return 0;
}
