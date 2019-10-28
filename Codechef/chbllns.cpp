#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll arr[3], k;
int t,i;
ll ans;

int main(){
	scanf("%d", &t);
	while (t--) {
		for (i = 0 ; i < 3 ; i++) {
			scanf("%lld", &arr[i]);
		}
		scanf("%lld", &k);
		sort(arr, arr + 3);
		ans = 0;
		for (i = 0; i < 3; i++){
			ans += min(k-1, arr[i]);
		}
		cout << ans + 1 << '\n';
	}
	return 0;
}