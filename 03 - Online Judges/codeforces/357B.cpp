#include <bits/stdc++.h>
using namespace std;

int m,n,i,j;
int x[3],belum,c,z;
int warna[100005];
int A[4];

int main(){
	scanf("%d %d", &n, &m);
	memset(warna,-1,sizeof warna);
	for (i=0;i<m;i++) {
		belum = 0;
		memset(A,0,sizeof A);
		for (j=0;j<3;j++) {
			scanf("%d", &x[j]);
			if (warna[x[j]]==-1) belum++;
		}
		if (belum==3) {
			for (int z=0;z<3;z++) 
				warna[x[z]] = z+1;
		}
		else {
			for (j=0;j<3;j++) {
				if (warna[x[z]]!=-1) {
					c = warna[x[z]];
					break;
				}
			}
			A[c] = 1;
			for (j=0;j<3;j++) {
				if (warna[x[j]]==-1) {
					for (z=1;z<=3;z++) {
						if (A[z]==0) {
							warna[x[j]] = z;
							A[z] = 1;
							break;
						}
					}
				}
			}
		}
	}
	for (i=1;i<=n;i++) {
		if (i==n) printf("%d\n", warna[i]);
		else printf("%d ", warna[i]);
	}
}
