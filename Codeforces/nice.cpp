#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string s;
int t, dist[10005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		dist[0] = 0;
		queue<int> antri;
		if (s == "l") cout << 0 << '\n';
		else {
			antri.push(0);
			int i = 1;
			int ans = 0;
			memset(dist, 0, sizeof dist);
			while (!antri.empty()) {
				int now = antri.front();
				antri.pop();
				dist[i] = dist[now] + 1;
				ans = max(ans, dist[i]);
				//cout << i << " " << dist[i] << '\n';
				if (s[i] == 'n') antri.push(i);
				dist[i+1] = dist[now] + 1;
				ans = max(ans, dist[i+1]);
				//cout << i+1 << " " << dist[i+1] << '\n';
				if (s[i+1] == 'n') antri.push(i+1);
				i += 2;
			}
			cout << ans << '\n';
		}
	}
	return 0;
}