#include <bits/stdc++.h>
using namespace std;

int A[25][25];
int n,i,j;
int ans,cek,temp;
int x,y;

int main() {
	for (i=0;i<20;i++)
		for (j=0;j<20;j++)
			scanf("%d",&A[i][j]);
	for (i=0;i<20;i++)
		for (j=0;j<20;j++) {
			cek = 0; temp = 1;
			for (int z=i;z>=0;z--) {	//cek up
				cek++;
				temp = temp*A[z][j];
			}
			if (cek==4 && temp>ans) ans = temp;
			temp = 1; cek = 0;
			for (int z=i;z<20;z++) {	//cek down
				cek++;
				temp = temp*A[z][j];
			}
			if (cek==4 && temp>ans) ans = temp;
			temp = 1; cek = 0;
			for (int z=j;z>=0;z--) {	//cek left
				cek++;
				temp = temp*A[i][z];
			}
			if (cek==4 && temp>ans) ans = temp;
			temp = 1; cek = 0;
			for (int z=j;z<20;z++) {
				cek++;
				temp = temp*A[i][z];
			}
			if (cek==4 && temp>ans) ans = temp;
			x = i; y = j;
			temp = 1; cek = 0;
			for (int z=0;z<4;z++) {
				if (x>=0 && x<20 && y>=0 && y<20) {
					cek++;
					temp = temp*A[x][y];
					x--; y--;	
				} 
			}
			if (cek==4 && temp>ans) ans = temp;
			x = i ; y = j;
			temp = 1; cek = 0;
			for (int z=0;z<4;z++) {
				if (x>=0 && x<20 && y>=0 && y<20) {
					cek++;
					temp = temp*A[x][y];
					x--;
					y++;
				}
			}
			if (cek==4 && temp>ans) ans = temp;
			x = i; y = j;
			temp = 1; cek = 0;
			for (int z=0;z<4;z++) {
				if (x>=0 && x<20 && y>=0 && y<20) {
					cek++;
					temp = temp*A[x][y];
					x++;
					y--;
				}
			}
			if (cek==4 && temp>ans) ans = temp;
			x = i; y = j;
			temp = 1; cek = 0;
			for (int z=0;z<4;z++) {
				if (x>=0 && x<20 && y>=0 && y<20) {
					cek++;
					temp = temp*A[x][y];
					x++;
					y++;
				}
			}
			if (cek==4 && temp>ans) ans = temp;
		}
	printf("%d\n",ans);
	return 0;
}
