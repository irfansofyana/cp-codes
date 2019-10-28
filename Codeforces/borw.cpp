#include <bits/stdc++.h>

using namespace std;

int n, arr[205];
int dp[205][205][205];

void inp(int &bil){
	bool neg = false;
	register int c;
	c = getchar();
	if (c == '-') {
		neg = true;
		c = getchar();
	}
	bil = 0;	
	for (;c>='0' && c<='9'; c=getchar())
		bil = 10*bil + c-'0';
	if (neg) bil *= -1;
}

int cari(int now,int lastb,int lastw){
	if (now == n + 1) return 0;
	if (dp[now][lastb][lastw] != -1) return dp[now][lastb][lastw];
	int res = (int)1e9;
	if (now == 1) {
		res = min(res, cari(now+1,1,0));
		res = min(res, cari(now+1,0,1));
		res = min(res, cari(now+1,0,0) + 1);
	}	
	else {
		res = min(res, cari(now+1,lastb,lastw) + 1);
		if (lastb == 0 || (arr[now] > arr[lastb])) res = min(res, cari(now + 1, now, lastw));
		if (lastw == 0 || (arr[now] < arr[lastw])) res = min(res, cari(now + 1, lastb, now));
	}
	return dp[now][lastb][lastw] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	inp(n);
	while (n!=-1){
		for (int i = 1 ; i <= n ; i++)
			inp(arr[i]);
		memset(dp,-1,sizeof dp);
		cout << cari(1,0,0) << '\n';
		inp(n);
	}
	return 0;
}