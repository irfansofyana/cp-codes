#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,smt,maks;
int dp[105][105];
char A[105][105];

int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++)
		for (j = 0; j < m ; j++)
			cin >> A[i][j];
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			if (i-1>=0 && i<n && j>=0 && j<m) maks = dp[i-1][j];
			if (i>=0 && i<n && j-1>=0 && j<m) maks = max(dp[i][j-1],maks);
			if (A[i][j]=='O') maks++;
			dp[i][j] = maks;
		}
	}
	cout << dp[n-1][m-1] << endl;
	return 0;
}