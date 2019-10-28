#include <bits/stdc++.h>
using namespace std;

int t, H, A;
int dp[5005][5005][4];

int cari(int x,int y,int z){
	if (x <= 0 || y <= 0) return 0;
	if (dp[x][y][z] != -1) return dp[x][y][z];
	int res = -1;
	if (z == 0) {	
		res = max(res, cari(x-5, y-10,1) + 1);
		res = max(res, cari(x-20, y+5, 2) + 1);
	}
	if (z == 1) {
		res = max(res, cari(x+3,y+2,0)+1);
		res = max(res, cari(x-20,y+5,2)+1);
	}
	if (z == 2) {
		res = max(res, cari(x+3,y+2,0)+1);
		res = max(res, cari(x-5,y-10,1)+1);
	}
	return dp[x][y][z] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> H >> A;
		memset(dp, -1, sizeof dp);
		cout << max(max(cari(H+3,A+2,0),cari(H-5,A-10,1)),cari(H-20,A+5,2)) << '\n';
	}
	return 0;
}