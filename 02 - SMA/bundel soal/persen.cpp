#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;
int i,j,ans;
int dp[10010];

int sqr(int k) {
	return k*k;
} 

int big_power(int a,int b) {
	if (b==0) return 1;
	else if (b==1) return (a%100);
	else if (b%2==0) return (sqr(big_power(a,(b/2))%100)%100);
	else if (b%2==1) return ((a%100)*sqr(big_power(a,(b-1)/2))%100);
}

void pertama() {
	dp[0] = b%100;
	for (i=1;i<=10000;i++) {
		dp[i] = big_power(dp[i-1],c);
		dp[i] = dp[i]%100;
	}
}
int main() {
	scanf("%d %d %d %d",&a,&b,&c,&d);
	pertama();
	ans = 1;
	for (i=1;i<=dp[d];i++) {
		ans = (ans*a)%101;
	}
	printf("%d\n",ans);
	return 0;
}
