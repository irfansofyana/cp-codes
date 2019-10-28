#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,k;
ll p1,p2,s1,s2;
ll bil1,bil2;
ll ans, tambahan;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> k >> a >> b;
	if (a < k && b < k) {
		cout << -1 << '\n';
		return 0;
	}
	bil1 = max(a,b); bil2 = min(a,b);
	a = bil1; b = bil2;
	if (b < k && a%k == 0) {
		cout << a/k << '\n';
		return 0;
	}
	if (b < k) {
		cout << -1 << '\n';
		return 0;
	}
	p1 = a/k; s1 = a%k;
	p2 = b/k; s2 = b%k;
	if (p1 + p2 == 0) cout << -1 << '\n';
	else cout << p1 + p2 << '\n';
	return 0;
}