#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = (int)2e5;

int n;
int last[MAXN+5], menit[MAXN+5];
int ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	menit[0] = 1;
	last[1] = 0;
	for (int i = 1; i <= n ; i++) {
		int x;
		cin >> x;
		if (i == 1) {
			ans++;
			last[1] = i;
			menit[i] = 1;
		}
		else {
			if (last[menit[x]] == x) {
				last[menit[x]] = i;
				menit[i] = menit[x];
			}
			else {
				ans++;
				last[ans] = i;
				menit[i] = ans;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}