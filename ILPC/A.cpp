#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int TC;
int n;
char m[10];
int len;
int dp[12][12][12][12][12];

int DP (int cur, int prv1, int prv2, int prv3, int prv4) {
	int& ret = dp[cur][prv1][prv2][prv3][prv4];
	if (ret != -1) return ret;
	if (len == 1 && cur >= 1) {
		if (prv4 == m[0] - '0') return ret = 0;
	}
	else if (len == 2 && cur >= 2) {
		if (prv3 == m[0] - '0' && prv4 == m[1] - '0') return ret = 0;
	}
	else if (len == 3 && cur >= 3) {
		if (prv2 == m[0] - '0' && prv3 == m[1] - '0' && prv4 == m[2] - '0') return ret = 0;
	}
	else if (len == 4 && cur >= 4) {
		if (prv1 == m[0] - '0' && prv2 == m[1] - '0' && prv3 == m[2] - '0' && prv4 == m[3] - '0') return ret = 0;
	}
	if (cur == n) return ret = 1;
	ret = 0;
	for (int i = 0; i <= 9; i++) {
		if (cur == 0 && i == 0 && n > 1) continue;
		ret += DP (cur + 1, prv2, prv3, prv4, i);
	}
	return ret;
}

int main () {
	scanf ("%d", &TC);
	while (TC--) {
		scanf ("%d %s", &n, m);
		len = strlen (m);
		memset (dp, -1, sizeof dp);
		int ans = DP (0, 0, 0, 0, 0);
		printf("%d\n", ans);
	}
	return 0;
}