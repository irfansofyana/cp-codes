#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = (int)1e6;

int n, ans[MAXN+2];
int dep[MAXN+2], bel[MAXN+2];
bool ada[MAXN+2];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	memset(dep, -1, sizeof dep);
	memset(bel, -1, sizeof bel);
	for (int i = 0 ; i < n ; i++) {
		int x,y;
		cin >> x >> y;
		dep[x] = y;
		bel[y] = x;
		ada[x] = true; ada[y] = true;
	}
	int i = 1;
	int now = 0;
	while (i < n) {
		ans[i] = dep[now];
		now = dep[now];
		i+=2;
	}
	for (int i = 0; i <= MAXN; i++) {
		if (ada[i] && bel[i] == -1) {
			now = i;
			break;
		}
	}
	i = 0;
	while (i < n) {
		ans[i] = now;
		now = dep[now];
		i += 2;
	}
	for (int i = 0 ; i < n ; i++) {
		cout << ans[i];
		cout << (i == n-1 ? '\n' : ' ');
	}
	return 0;
}