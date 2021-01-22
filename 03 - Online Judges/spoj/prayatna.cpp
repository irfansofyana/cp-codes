#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int t,m,tot;
int n,i,j,ans;
vector<int> arr[100005];
bool visited[100005];

void dfs(int node){
	visited[node] = true;
	//ans++;
	for (int z = 0 ; z < arr[node].size(); z++) {
		if (!visited[arr[node][z]]) 
			dfs(arr[node][z]);
	}
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(visited, false, sizeof visited);
		for (i = 0 ; i < m ; i++) {
			int a,b;
			cin >> a >> b;
			arr[a].pb(b);
			arr[b].pb(a);
		}
		ans = 0;
		for (i = 0 ; i < n ; i++) {
			if (!visited[i]) {
				ans++;
				dfs(i);
			}
		}
		cout << ans << '\n';
		for (i = 0 ; i < n ; i++) 
			arr[i].clear();
	}
	return 0;
}