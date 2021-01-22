#include <bits/stdc++.h>
#define eps 1e-12
#define INF 2000000000

using namespace std;

int n,m,i,j,k,ans;
char smt[255][255],A[1000][1000];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

void zoom(){
	for (i=0;i<n;i++)
		for (j=0;j<m;j++){
			if (smt[i][j]=='/') {
				int tempx = 3*i; int tempy=3*j+2;
				for (k=0;k<3;k++) {
					A[tempx+k][tempy-k] = '/';
				}
			}
			else if (smt[i][j]=='\\') {
				int tempx = 3*i; int tempy = 3*j;
				for (k=0;k<3;k++) {
					A[tempx+k][tempy+k] = '\\';
				}
			}
		}
}

void floodfill(int x,int y){
	A[x][y] = '/';
	for (int z=0;z<4;z++) {
		if (x+dx[z]>=0 && x+dx[z]<3*n && y+dy[z]>=0 && y+dy[z]<3*m) { //cek border
			if (A[x+dx[z]][y+dy[z]]=='.') 
				floodfill(x+dx[z],y+dy[z]);
		}
	}
}
int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i=0;i<n;i++) 
		for (j=0;j<m;j++)
			cin >> smt[i][j];
	for (i=0;i<1000;i++) 
		for (j=0;j<1000;j++)
			A[i][j] = '.';
	zoom();
	/*for (i=0;i<3*n;i++) {
		for (j=0;j<3*m;j++) 
			cout << A[i][j];
		cout << endl;
	}*/
	for (i=0;i<3*m;i++) 
		if (A[0][i]=='.') floodfill(0,i);
	for (i=0;i<3*m;i++) 
		if (A[3*n-1][i]=='.') floodfill(3*n-1,i);
	for (i=0;i<3*n;i++) 
		if (A[i][0]=='.') floodfill(i,0);
	for (i=0;i<3*n;i++) 
		if (A[i][3*m-1]=='.') floodfill(i,3*m-1);
	for (i=0;i<3*n;i++) {
		for (j=0;j<3*m;j++) {
			if (A[i][j]=='.') {
				ans++;
				floodfill(i,j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
