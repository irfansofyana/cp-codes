#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define OPTIMASI
using namespace std;

typedef long long ll;

const int N = 100000;

int n,i,j;
ll ans,dp[2][N + 5],arr[N + 5];
string s;
pair<string,string> nama[N + 5];


ll cari(int _last, int idx){
	if (dp[_last][idx]!=-1) return dp[_last][idx];
	if (idx == 0) {
		return dp[_last][idx] = min(cari(0, idx + 1), cari(1, idx + 1) + arr[idx]);
	}
	else if (idx == n) return 0;
	else {
		ll mini = (ll)1e15;
		if (_last == 0) {
			if (nama[idx].fi >= nama[idx-1].fi) mini = cari(0, idx+1);
			if (nama[idx].se >= nama[idx-1].fi) mini = min(mini, cari(1,idx+1) + arr[idx]);
		}
		else if (_last == 1) {
			if (nama[idx].fi >= nama[idx-1].se) mini = cari(0, idx+1);
			if (nama[idx].se >= nama[idx-1].se) mini = min(mini, cari(1,idx+1) + arr[idx]);
		}
		return dp[_last][idx] = mini;
	}
}
int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	for (i = 0 ; i < n ; i++) {
		cin >> s;
		nama[i].fi = s;
		reverse(s.begin(),s.end());
		nama[i].se = s;
	}
	memset(dp, -1, sizeof dp);
	cout << (cari(0,0) == (ll)1e15 ? -1 : cari(0,0)) << '\n';
	return 0;
}
