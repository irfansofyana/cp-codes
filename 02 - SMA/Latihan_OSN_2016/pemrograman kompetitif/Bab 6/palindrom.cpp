#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string s;
int dp[55][55];

int cari(int kiri,int kanan){
	if (dp[kiri][kanan]!=-1) return dp[kiri][kanan];
	if (kiri == kanan) return 1;
	if (kiri > kanan) return 0;
	if (s[kiri] == s[kanan]) return dp[kiri][kanan] = cari(kiri+1,kanan-1) + 2;
	return dp[kiri][kanan] = max(cari(kiri + 1,kanan),cari(kiri, kanan - 1));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		memset(dp,-1,sizeof dp);
		cin >> s;
		cout << cari(0,(int)s.size()-1) << '\n';
	}
	return 0;
}