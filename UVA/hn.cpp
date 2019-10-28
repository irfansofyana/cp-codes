#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,ans;
ll awal,akhir;
ll t;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		if (n <= 0) cout << 0 << '\n';
		else {
			i = n;
			ans = 0;
			while (1) {
				if (i == 1) {
					ans += n;
					break;
				}
				else {
					awal = i;
					akhir = (n/((n/i)+1)) + 1;
					ans += (awal-akhir+1)*(n/i);
					i = akhir-1;
				}
			}
			cout << ans << '\n';
		}
	}
	return 0;
}