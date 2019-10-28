#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, arr[3];

ll f(ll x){
	return ((x+3)*(x+2)*(x+1))/6;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> arr[0] >> arr[1] >> arr[2];
		ll ans = f(n);
		ll tot = 0;
		for (int i = 1 ; i < (1 << 3); i++){
			int ada = 0;
			ll sum = 0;
			for (int j = 0 ; j < 3; j++) {
				if ((i&(1 << j)) > 0) {
					ada++;
					sum += arr[j]+1;
				}
			}
			if (sum <= n) {
				//cout << ada << " " << f(n-sum) << '\n';
				if (ada%2 == 1) tot += f(n-sum);
				else tot -= f(n-sum);
			}
		}
		cout << ans-tot << '\n';
	}
	return 0;
}