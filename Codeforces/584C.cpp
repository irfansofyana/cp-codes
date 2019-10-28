#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, t, sama, beda;
string a, b, ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> t;
	cin >> a >> b;
	ans = a;
	for (int i = 0 ; i < n ; i++) if (a[i] == b[i]) sama++;
	if (2*t < n - sama)	cout << -1 << '\n';
	else {
		beda = n-sama;
		int x = 2*t - beda;
		bool ganti = true;
		for (int i = 0 ; i < n ; i++) {
			if (a[i] != b[i]) {
				if (x > 0) {
					x--;
					for (char j = 'a'; j <= 'z'; j++) 
						if (j!=a[i] && j!=b[i]) {
							ans[i] = j;
							break;
						}
				}
				else {
					if (ganti) ans[i] = a[i];
					else ans[i] = b[i];
					ganti = !ganti;
				}
			}
		}
		if (x > 0) {
			x = t - beda;
			for (int i = 0; i < n && x > 0 ; i++) {
				if (a[i] == b[i]) {
					if (x > 0) {
						x--;
						for (char j = 'a' ; j <= 'z'; j++) {
							if (a[i]!=j && b[i]!=j) {
								ans[i] = j;
								break;
							}
						}
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}