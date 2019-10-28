#include <bits/stdc++.h>
using namespace std;

int A[30][30];
int n,m,i,j;
int temp;
int x,y,bil;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};

bool cek(int x,int y){
	return ((x>=0 && x<n) && (y>=0 && y < m));
}

void dfs(int x,int y){
	temp++;
	A[x][y] = -1;
	for (int z = 0 ; z < 4; z++) {
		if (cek(x+dx[z],y+dy[z])) {
			if (A[x+dx[z]][y+dy[z]]==bil) dfs(x+dx[z],y+dy[z]);
		} 
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++)
		for (j = 0; j < m ; j++)
			cin >> A[i][j];
	cin >> x >> y;
	bil = A[x][y];
	dfs(x,y);
	cout << temp*(temp-1) << '\n';
	return 0;
}