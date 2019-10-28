#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n, m, s;
char arr[505][505];
bool visited[505][505];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};


bool cek(int x,int y){
	return (x >= 0 && x < n && y >=0 && y< m && arr[x][y] == '.');
}

void dfs(int x,int y){
	visited[x][y] = true;
	for (int i = 0 ; i < 4 ; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (cek(nx,ny) && !visited[nx][ny] && s > 0) {
			dfs(nx,ny);
		}
	}
	if (s > 0) {
		s--;
		arr[x][y] = 'X';
	} 
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> s;
	for (int i = 0 ; i < n ; i++)
		for (int j = 0 ; j < m ; j++)
			cin >> arr[i][j];
	for (int i = 0 ; i < n ; i++) 
		for (int j = 0 ; j < m ; j++) {
			if (arr[i][j] == '.') dfs(i,j);
		}
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0; j < m ; j++) {
			cout << arr[i][j];
		}cout << '\n';
	}
	return 0;
}