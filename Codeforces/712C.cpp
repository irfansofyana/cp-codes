#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll x, y, ans;
ll arr[3];

bool comp(ll a,ll b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x >> y;
	arr[0] = y; arr[1] = y; arr[2] = y;
	while (1) {
		if (arr[0] == x && arr[1] == x && arr[2] == x) break;
		sort(arr, arr + 3, comp);
		ll atas = arr[0] + arr[1] - 1;
		if (atas > x) atas = x;
		ll tmp = arr[0];
		arr[2] = arr[1]; arr[1] = tmp; arr[0] = atas;
		ans++;
	}
	cout << ans << '\n';
	return 0;
}