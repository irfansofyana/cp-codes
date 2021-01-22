#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, c;
int now, ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> c;
	for (int i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		if (i == 0) {
			now = x;
			ans = 1;
		}
		else {
			if (x - now <= c) {
				now = x;
				ans++;
			}
			else {
				now = x;
				ans = 1;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}