#include <bits/stdc++.h>
using namespace std;

int t,n,m,i,j,ans,tc;
int fibo[10010];

const int MOD = 10000;

void pre_compute(){
	fibo[1] = 1; fibo[2] = 1;
	for (i = 3 ; i < 10010; i++) {
		fibo[i] = (fibo[i-1] + fibo[i-2]) % MOD;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre_compute();
	cin >> t;
	while (t--) {
		cin >> n >> m;
		ans = 0;
		if (n == 0) {
			if (m == 0) ans = 1;
			else if (m >= 1) ans = 0;
		}
		else if (n == 1) {
			if (m == 1) ans = 1;
			else ans = 0;
		}
		else {
			if (m == 0) {
				ans = fibo[n-1];
			}
			else if (m > n) ans = 0;
			else ans = fibo[n-m+1];
		}
		cout << ans << '\n';
	}
	return 0;
}
