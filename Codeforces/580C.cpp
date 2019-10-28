#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = (int)1e5;

int ans, n, m, ada[MAXN+5];
bool visited[MAXN+5];
vector<int> arr[MAXN+5];

void dfs(int node, int curr){
	visited[node] = true;
	if (curr > m) return;
	int itung = 0;
	for (int z = 0 ; z < arr[node].size(); z++) {
		if (!visited[arr[node][z]]) {
			itung++;
			if (!ada[arr[node][z]]) dfs(arr[node][z], 0);
			else dfs(arr[node][z], curr+1);
		}
	}
	if (itung == 0) ans++;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n ; i++) cin >> ada[i];
	for (int i = 0 ; i < n-1; i++) {
		int x,y;
		cin >> x >> y;
		arr[x].pb(y); 
		arr[y].pb(x);
	}
	dfs(1,ada[1]);
	cout << ans << '\n';
	return 0;
}