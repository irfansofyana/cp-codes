#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll l1, r1, l2, r2;
ll k;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	if (l2 > r1 || r2 < l1) cout << 0 << '\n';
	else {
		ll awal = max(l1, l2);
		ll akhir = min(r1, r2);
		if (k < awal || k > akhir) cout << akhir-awal+1 << '\n';
		else cout << akhir-awal << '\n';
	}
	return 0;
}