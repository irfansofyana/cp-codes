#include <bits/stdc++.h>
using namespace std;

int parties,budget;
int n,i,j;
int biaya[105],seneng[105];
int dp[105][505];
int ans;


int knaps(int idx,int _now){
	if (dp[idx][_now]!=-1) return dp[idx][_now];
	if (idx==parties) return 0;
	if (biaya[idx] > _now) return dp[idx][_now] = knaps(idx+1,_now);
	if (biaya[idx] <= _now) {
		int c = knaps(idx+1,_now-biaya[idx])+seneng[idx];
		int cc = knaps(idx+1,_now);
		if (c > cc) {
			return dp[idx][_now] = c;
		}
		return dp[idx][_now] = cc;
	}
}

void cek(int idx,int _now) {
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	while (cin >> budget >> parties) {
		if (budget==0 && parties==0) return 0;
		for (i = 0 ; i < parties ; i++) {
			cin >> biaya[i] >> seneng[i];
		}
		memset(dp,-1,sizeof dp);
		ans =knaps(0,budget);
		cout << ans << '\n';
	}
	return 0;
}