#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,c,d;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
char A[55][55];
bool udah[55][55],bisa,ans;

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m) return true;
	return false;
}

void dfs(int x1,int x2,int x,int y,int k){
	udah[x][y] = true;
	if (k<4) {
		for (int z = 0 ;z < 4 ; z++) {
			c = x+dx[z]; d = y+dy[z];
			if (cek(c,d) && A[c][d]==A[x1][x2] && !udah[c][d]) dfs(x1,x2,c,d,k+1);
		}
	}
	else {
		for (int z = 0 ; z < 4 ; z++) {
			c = x+dx[z]; d = y+dy[z];
			if (c==x1 && d==x2) {
				bisa = true;
			}
			else if (cek(c,d) && A[c][d]==A[x1][x2] && !udah[c][d]) dfs(x1,x2,c,d,k+1);
		}
	}
}

int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < m ; j++)
			cin >> A[i][j];
	memset(udah,false,sizeof udah); 
	ans = false;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			bisa = false; dfs(i,j,i,j,1); memset(udah,false,sizeof udah);
			if (bisa) ans = true; 
		}
	}
	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}