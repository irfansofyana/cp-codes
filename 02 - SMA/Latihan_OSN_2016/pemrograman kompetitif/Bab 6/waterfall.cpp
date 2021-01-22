#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll V,H,N;
ll i,j;
char arr[505][505];
ll dp[505][505];

ll cari(ll x,ll y){
	if (dp[x][y]!=-1) return dp[x][y];
	if (x >= V) return 0;
	if (arr[x+1][y] == '0') return dp[x][y] = cari(x+1,y);
	if (arr[x+1][y] == '1') {
		ll temp = 1;
		ll kiri = y-1;
		while (kiri >= 1 && arr[x+1][kiri] == '1') kiri--;
		if (kiri >= 1) temp += cari(x+1,kiri);
		ll kanan = y+1;
		while (kanan <= H && arr[x+1][kanan] == '1') kanan++;
		if (kanan <= H) temp += cari(x+1,kanan);
		return dp[x][y] = temp;
	}
} 

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> V >> H >> N;
	memset(arr,'0',sizeof arr);
	while (N--) {
		ll a,b,c,d;
		cin >> a >> b >> c >> d;
		for (i = a ; i <= c ; i++) {
			for (j = b ; j <= d; j++) {
				arr[i][j] = '1';
			}
		}
	}
	memset(dp,-1,sizeof dp);
	ll ans = 0;
	for (i = 1 ; i <= H; i++) {
		ans = max(ans,cari(0,i));
	}
	cout << ans << '\n';
	return 0;
}