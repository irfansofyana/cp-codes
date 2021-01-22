#include <bits/stdc++.h>
using namespace std;

int n,m,k,i,j;
int x,y,temp;
int A[1005][1005];
int	baris[1005],kolom[1005];
char perintah;

int main(){
	scanf("%d %d %d", &n, &m, &k);
	for (i=1;i<=n;i++) 
		for (j=1;j<=m;j++) 
			scanf("%d",&A[i][j]);
	for (i=1;i<=1000;i++)
		baris[i] = kolom[i] = i;
	while (k--) {
		getchar();
		scanf("%c %d %d", &perintah, &x, &y);
		if (perintah=='g') printf("%d\n", A[baris[x]][kolom[y]]);
		else if (perintah=='r') {
			swap(baris[x],baris[y]);
		}
		else {
			swap(kolom[x],kolom[y]);
		}
	}
	return 0;
}
