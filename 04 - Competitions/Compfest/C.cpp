#include <bits/stdc++.h>
#define fi first
#define se second
#define OPTIMASI
using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9+7;

ll n,m,i,j;
ll res;

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> n >> m;
	for (i = 1; i <= n ; i++) {
		res = res + (i*(i+i+(i-1)*m))/2;
		res %= MOD;
	}
	cout << res << '\n';
	return 0;
}
