#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

int ans;
int a, b, c, d;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> a >> b >> c >> d) {
		if (a == 0 && b == 0 && c == 0 && d == 0) return 0;
		ans = 80;
		ans += (b <= a ? (a - b) : a + (40 - b));
		ans += 40;
		ans += (c >= b ? c - b : 40 - b + c);
		ans += (d <= c ? c - d : c + 40 - d);
		cout << ans*9 << '\n';
	}
	return 0;
}