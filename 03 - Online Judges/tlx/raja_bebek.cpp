#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

int n, y;
int x;
int dp[3][1005];

int main(){
	scanf("%d %d", &n, &y);
	scanf("%d", &x);
	dp[0][0] = 0;
	for (int i = 1; i <= 1000; i++){
		if (i == x) dp[0][i] = 1;
		else dp[0][i] = INF; 
	}
	for (int i = 1; i < n; i++){
		scanf("%d", &x);
		for (int j = 1; j <= 1000; j++){
			dp[1][j] = INF;
		}
		for (int j = 1; j <= 1000; j++){
			if (j >= x) {
				dp[1][j] = min(dp[1][j], dp[0][j]);
				dp[1][j] = min(dp[1][j], 1 + dp[0][j-x]);
			}else {
				dp[1][j] = min(dp[1][j], dp[0][j]);
			}
		}
		for (int j = 1; j <= 1000; j++) dp[0][j] = dp[1][j];
	}
	int ans = dp[0][y];
	if (ans == INF)	ans = -1;
	printf("%d\n", ans);
	return 0;
}