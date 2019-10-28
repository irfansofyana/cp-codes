#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9 + 7;

int t;
ll n,m,i,j;
ll com[105][105];

void pre(){
	com[0][0] = 1;
	for (i = 1 ; i <= 100 ; i++) {
		for (j = 0 ; j <= i ; j++) {
			if (j == 0 || j == i ) com[i][j] = 1;
			else com[i][j] = com[i-1][j] + com[i-1][j-1];
			com[i][j] %= MOD;
		}
	}
}

ll sqr(ll a){
	return ((a%MOD) * (a%MOD))%MOD;
}

ll pangkat(ll a, ll b){
	if (b == 0) return 1;
	else if (b == 1) return a%MOD;
	else if (b%2 == 0) return sqr(pangkat(a,b/2));
	else if (b%2 == 1) return ((a%MOD) * sqr(pangkat(a,(b-1)/2)))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre();
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n == 25 && m == 25) cout << 0 << '\n';
		else if (n == 25) {
			if (m < 24) {
				cout << com[n + m - 1][m] << '\n';
			}
			else if (m == 24 || m > 27 || m == 26) cout << 0 << '\n';
			else if (m == 27) cout << (2 * com[47][24] * pangkat(2,1))%MOD << '\n';
		}
		else if (m == 25) {
			if (n < 24) cout << com[n + m - 1][n] << '\n';
			else if (n == 24 || n > 27 || n == 26) cout << 0 << '\n';
			else if (n == 27) cout <<  (2 * com[47][24] * pangkat(2,1))%MOD << '\n';
		}
		else {
			if (n <= 24 && m <= 24) cout << 0 << '\n';
			else if (abs(n-m) < 2 || abs(n-m) > 2) cout << 0 << '\n'; 
			else cout << (com[47][24] * 2 * pangkat(2, min (n-24,m-24)) )%MOD << '\n';
		}
	}
	return 0;
}
