#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n,i,j;
int A[2005];
int dp[2005][2005];

int cari(int x,int y){
	if (dp[x][y]!=-1) return dp[x][y];
	if (x==y) {
		return 0;
	}
	return dp[x][y] = max(cari(x+1,y)+A[x],cari(x,y-1)+A[y]);
}

int main(){
	_
	cin >> n;
	for (i = 1 ; i <= n ; i++)
		cin >> A[i];
	memset(dp,-1,sizeof dp);
	cout << cari(1,n) << '\n';
	return 0;
}