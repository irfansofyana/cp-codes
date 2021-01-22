#include <bits/stdc++.h>

using namespace std;

int n, m, z;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int ans = 0;
	cin >> n >> m >> z;
	for (int i = m; i <= z; i+=m) {
		if (i%n == 0) ans++;
	}
	cout  << ans << '\n';
	return 0;
}