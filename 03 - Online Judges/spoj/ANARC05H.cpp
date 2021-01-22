#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string s;
int tc;
int dp[30][350];

int cari(int idx,int sum){
	if (idx == n+1) return 1;
	if (dp[idx][sum]!=-1) return dp[idx][sum];
	int jum = 0;
	int res = 0;
	for (int z = idx; z <= n ; z++) {
		jum += (int)s[z-1]-'0';
		if (jum >= sum)
			res += cari(z + 1, jum); 
	}
	return dp[idx][sum] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> s) {
		if (s == "bye") return 0;
		memset(dp, -1 , sizeof dp);
		n = (int)s.size();
		cout << ++tc << ". " << cari(1,0) << '\n';
	}
	return 0;
}
