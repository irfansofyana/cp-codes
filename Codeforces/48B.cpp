#include <bits/stdc++.h>
using namespace std;

int A[55][55];
int n,i,j,m;
int a,b,mini;

void cari(int x,int y){
	int itx,ity,ittx,itty,temp;
	itx = ity = 0;
	x--; y--;
	ittx = x; itty = y;
	while (ittx<n) {
		ity = 0;
		itty = y;
		while (itty<m) {
			temp = 0;
			for (int z=itx;z<=ittx;z++) {
				for (int zz=ity;zz<=itty;zz++) {
					if (A[z][zz]==1) temp++; 
				}
			}
			if (temp<mini) mini = temp;
			ity++;
			itty++;
		}
		itx++;
		ittx++;
	}
}
int main(){
	scanf("%d %d", &n, &m);
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d", &A[i][j]);
	scanf("%d %d", &a, &b);
	mini = 1000000000;
	cari(a,b); cari(b,a);
	printf("%d\n", mini);
}
