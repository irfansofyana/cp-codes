#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll arr[1000005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0; i < n ; i++){
		cin >> j;
		arr[j]++;
	}
	ll ans = 0;
	for (i = 0 ; i <= 1000000 ; i++) {
		arr[i+1] += arr[i]/2;
		if (arr[i]%2==1) ans++;
	}
	j = arr[1000001];
	while (j > 0) {
		if (j%2==1) ans++;
		j /= 2;
	}
	cout << ans << '\n';
	return 0;
}