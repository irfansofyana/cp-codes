#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,k;
vector<ll> tmp;

int main(){
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld %lld", &n, &k);
		if (k == 0) printf("-1\n");
		else if (k == 1) printf("1\n");
		else {
			tmp.clear();
			for (i = 31; i >= 0 ; i--) {
				if ((n&(1<<i)) > 0){
					tmp.push_back(i);
				}
			}
			ll ans = 1;
			for (i = 0 ; i < min((ll)tmp.size()-1,k-1); i++){
				ans += (ll) (1 << (tmp[i]));
			}
			printf("%lld\n", ans);
		}
	}
	return 0;
}