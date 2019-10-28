#include <bits/stdc++.h>
using namespace std;

int N,i,j;
int T;
int dp[10005];

bool cek(int N){
	int x = (int)sqrt(N);
	if (x*x==N) return true;
	return false;
}

int cari(int N) {
	if (cek(N)) return 1;
	if (dp[N]!=-1) return dp[N];
	
	int ret = (int)1e+9;
	for (int z = 1 ; z * z <= N; z++) {
		ret = min(ret,cari(N-z*z) + 1);
	}
	return dp[N] = ret;
}

void generate() {
	memset(dp,-1,sizeof dp);
	for (i = 1 ; i <= 10000 ; i++) {
		if (dp[i]==-1) dp[i] = cari(i);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	cin >> T;
	while (T--) {
		cin >> N;
		cout << dp[N] << '\n';
	}
	return 0;
}