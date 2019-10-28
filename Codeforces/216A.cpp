#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll arr[3];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> arr[0] >> arr[1] >> arr[2];
	ll ans = 0;
	while (arr[0] > 1) {
		ans += arr[0]*2 + (arr[2]*2 - 2) + ((arr[1]-2)*2);
		arr[0]--; arr[1]--; arr[2]--;
	}
	ans += arr[1]*arr[2];
	cout << ans << '\n';
	return 0;
}