#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = 1000000;

typedef long long ll;

ll sum[MAXN+5], n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1 ; i <= n ; i++) {
		int x;
		cin >> x;
		if (x == 0) continue;
		sum[i]--;
		int bil = max(1, i-x);
		sum[bil]++;
	}
	ll tot = 0;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		tot+=sum[i];
		if (tot == 0) ans++;
	}
	cout << ans << '\n';
	return 0;
}