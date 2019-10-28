#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int x1, x2, x3;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x1 >> x2 >> x3;
	int ans;
	for (int i = 1; i <= 1000; i++) {
		if (i == 1) ans = abs(x1 - i) + abs(x2 - i) + abs(x3-i);
		else ans = min(ans, abs(x1 - i) + abs(x2 - i) + abs(x3-i));
	}
	cout << ans << '\n';
	return 0;
}