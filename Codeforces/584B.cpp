#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define MOD 1000000007
using namespace std;

typedef long long ll;

int n,i,j;
ll ans,lawan;

int main(){
	OPTIMASI
	cin >> n;
	ans = 1;
	for (i = 1 ; i<=3*n; i++) {
		ans *= 3;
		ans %= MOD;
	}
	lawan = 1;
	for (i = 1 ; i <= n ; i++) {
		lawan *= 7;
		lawan %= MOD;
	}	
	ans = ans-lawan;
	while (ans<0) {
		ans += MOD;
	}
	cout << ans << '\n';
	return 0;
}