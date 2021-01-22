#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int dp[30];

int main(){
	dp[0] = 1; dp[1] = 1;
	for (i = 2 ; i <= 20 ; i++) {
		for (j = 1 ; j <= i ; j += 2){
			dp[i] += dp[i-j];
		}
	}
	cout << dp[20] << '\n';
}