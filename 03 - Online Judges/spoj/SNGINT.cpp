#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n,i,j;
int cnt[15];
int t;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		memset(cnt, 0, sizeof cnt);
		if (n == 1) cout << 1 << '\n';
		else if (n == 0) cout << 10 << '\n';
		else {
			if (n > 0) {
				for (i = 9 ; i >= 2 ; i--) {
					while (n%i == 0) {
						cnt[i]++;
						n/=i;
					}
				}
			}
			if (n > 9 ) cout << -1 << '\n';
			else {
				for (i = 2 ; i <= 9 ; i++) {
					for (j = 1 ; j <= cnt[i]; j++) 
						cout << i;
				}
				cout << '\n';
			}
		}
	}
	return 0;
}
