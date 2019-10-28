#include <bits/stdc++.h>
using namespace std;

int m,n,i,j;
char a,b,c,d;
char A[1000][1000];
int x,y,z,temp;
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
char nama[1000];
void flood_fill(int p,int q,char warna) {
	char temp;
	temp = A[p][q];
	A[p][q] = warna;
	for (int z=0;z<4;z++) {
		if (p+dx[z]>=0 && p+dx[z]<n && q+dy[z]>=0 && q+dy[z]<m)
			if (A[p+dx[z]][q+dy[z]]==temp) {
				flood_fill(p+dx[z],q+dy[z],warna);
			} 
	}
}
int main(){
	while (scanf("%c",&a) && a!='X'){
		if (a=='I') {
			scanf("%d %d",&m,&n);
			for (i=0;i<n;i++)
				for (j=0;j<m;j++)
					A[i][j] = '0';
			
		}
		else if (a=='C') 
			memset(A,'0',sizeof A);
		else if (a=='L') {
			scanf("%d %d %c",&x,&y,&b);
			x--; y--;
			A[y][x] = b;
		}
		else if (a=='V') {
			scanf("%d %d %d %c",&x,&y,&z,&b);
			x--; y--; z--;
			for (i=y;i<=z;i++)
				A[i][x] = b;
		}
		else if (a=='H') {
			scanf("%d %d %d %c",&x,&y,&z,&b);
			x--; y--; z--;
			for (i=x;i<=y;i++) 
				A[z][i] = b;
		}
		else if (a=='K') {
			scanf("%d %d %d %d %c",&x,&y,&z,&temp,&b);
			x--; y--; z--; temp--;
			for (i=x;i<=z;i++) {
				for (j=y;j<=temp;j++)
					A[i][j] = b;
			}
		}
		else if (a=='F') {
			scanf("%d %d %c",&x,&y,&b);
			x--; y--;
			flood_fill(x,y,b);
		}
		else if (a=='S') {
			scanf("%s",&nama);
			printf("%s\n",nama);
			for (i=0;i<n;i++){
				for (j=0;j<m;j++)
					printf("%c",A[i][j]);
				printf("\n");
			}
		}
	}
	return 0;
}
