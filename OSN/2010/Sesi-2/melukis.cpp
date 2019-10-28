#include <bits/stdc++.h>
using namespace std;

int r,c,n,i,j;
int k,x,y,z,zz;
int A[25][25];

int main(){
	scanf("%d %d",&c,&r);
	scanf("%d",&n);
	while (n--) {
		scanf("%d %d %d %d %d",&x,&y,&z,&zz,&k);
		x--; y--; z--; zz--;
		for (i=y;i<=zz;i++) {
			for (j=x;j<=z;j++) 
				A[i][j] = k;
		}
		
		/*for (i=0;i<r;i++){
			for (j=0;j<c;j++)
				printf("%d",A[i][j]);
			printf("\n");
		} */
	}
	for (i=0;i<r;i++){
		for (j=0;j<c;j++)
			printf("%d",A[i][j]);
		printf("\n");
	}
	return 0;
}
