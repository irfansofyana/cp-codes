#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;
pi arr[2005];
int n,m,i,j;
int dp[2005][105];
int ans;
vector<int> jaw;

int cari(int idx,int beban){
	if (dp[idx][beban]!=-1) return dp[idx][beban];
	if (idx==n) return 0;
	if (berat[idx] > beban) return dp[idx][beban] = cari(idx+1,beban);
	return dp[idx][beban] = max(cari(idx+1,beban),cari(idx+1,beban-berat[idx]) + harga[idx]);
}

void dapatkan(int idx,int beban) {
	if (dp[idx+1][beban-berat[idx]] + harga[idx] > dp[idx+1][beban]) {
		jaw.push_back(idx);
		if (idx+1 < n) dapatkan(idx+1,beban-berat[idx]);
	}
	else if (idx + 1 < n) dapatkan(idx+1,beban);
}

bool comp(pi a,pi b){
	if (a.first==b.first) return a.second < b.second;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> m >> n;
	for (i = 0 ; i < n; i++) {
		int x,y;
		cin >> x >> y;
		arr[i] = make_pair(x,y);
	}
	sort(arr,arr+n,comp);
	memset(dp,-1,sizeof dp);
	ans = cari(0,m);
	dapatkan(0,m);
	for (i = 0 ; i < jaw.size(); i++) {
		cout << jaw[i] + 1 << '\n';
	}
	return 0;
}