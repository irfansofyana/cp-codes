/*
	Problem	 	: A. Joystick 
	created		: 07-10-2017
	solution by : cokguzel48 (Irfan Sofyana Putra)
*/
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, m;
int dp[5005][5005];

int cari(int x,int y){
	if (x <= 0 || y <= 0) return 0;
	if (x == 1 && y == 1) return 0;
	if (x == 1) return cari(x + 1, y - 2) + 1;
	if (y == 1) return cari(x - 2, y + 1) + 1;
	if (dp[x][y] != -1) return dp[x][y];
	return dp[x][y] = max(cari(x + 1, y - 2), cari(x - 2, y + 1)) + 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n >> m;
	memset(dp, -1, sizeof dp);
	cout << cari(n, m) << '\n';
	return 0;
}