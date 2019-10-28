#include <bits/stdc++.h>
#define INF (int)1e9
using namespace std;

string dummy;
int r,c,i,j;
char petaa[1005][1005];
int dp[1005][1005][3];

bool cek(int x,int y){
	return (x >= 1 && x <= r && y >= 1 && y <= c && petaa[x][y] == '.');
}

int cari(int x,int y,int z){
	if (dp[x][y][z]!=-1) return dp[x][y][z];
	if (y == c && petaa[x][y] == '.' ) return 0;
	if (y == c) return INF;
	if (z == 0) {
		int temp1 = INF;
		if (cek(x-1,y)) temp1 = min(temp1,cari(x-1,y,1) + 1);
		if (cek(x,y+1)) temp1 = min(temp1,cari(x,y+1,0));
		if (cek(x+1,y)) temp1 = min(temp1,cari(x+1,y,2) + 1);
		return dp[x][y][z] = temp1;
	}
	if (z == 1) {
		int temp1 = INF;
		if (cek(x,y+1)) temp1 = min(temp1,cari(x,y+1,0));
		return dp[x][y][z] = temp1;
	}
	if (z == 2) {
		int temp1 = INF;
		if (cek(x,y+1)) temp1 = min(temp1,cari(x,y+1,0));
		return dp[x][y][z] = temp1;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy;
	cin >> r >> c;
	for (i = 1 ; i <= r ; i++) {
		for (j = 1 ; j <= c ; j++) 
			cin >> petaa[i][j];
	}
	memset(dp,-1,sizeof dp);
	int ans = (int)1e9;
	for (i = 1 ; i <= r ; i++) {
		if (petaa[i][1] == '.') {
			ans = min(ans,cari(i,1,0));
		}
	}
	cout << (ans >= INF ? -1 : ans) << '\n';
	return 0;
}