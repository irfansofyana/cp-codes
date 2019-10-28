#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int s, t, a, b, m, n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s >> t >> a >> b >> m >> n;
	int app = 0;
	while (m--) {
		int d;
		cin >> d;
		if (a + d >= s && a + d <= t) app++;	
	}
	int orr = 0;
	while (n--) {
		int l;
		cin >> l;
		if (b + l >= s && b + l <= t) orr++;
	}
	cout << app << '\n'; cout << orr << '\n';
	return 0;
}