#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,i,j;
ll x,y;
pll arr[100005][5];
ll dp[100005][5];

ll cari(ll idx,ll opsi){
	if (idx+1 == n) return 0;
	if (dp[idx][opsi]!=-1) return dp[idx][opsi];
	ll tmp = 0;
	if (arr[idx+1][0].first > arr[idx][opsi].second) 
		tmp = max(tmp,cari(idx+1,0) + 1);
	if (arr[idx+1][1].first > arr[idx][opsi].second)
		tmp = max(tmp,cari(idx+1,1));
	if (arr[idx+1][2].first > arr[idx][opsi].second)
		tmp = max(tmp,cari(idx+1,2) + 1);
	return dp[idx][opsi] = tmp;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x >> y;
		arr[i][0] = mp(x-y,x);
		arr[i][1] = mp(x,x);
		arr[i][2] = mp(x,x+y);
	}
	memset(dp,-1,sizeof dp);
	ll ans = 0;
	for (i = 0 ; i < 3 ; i++) {
		if (i==1) {
			ans = max(ans,cari(0,i));
		}
		else ans = max(ans,cari(0,i) + 1);
	}
	cout << ans << '\n';
	return 0;
}