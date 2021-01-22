#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, ans;
vector<int> arr[2005];
bool visited[2005];

void dfs(int node,int depth){
	visited[node] = true;
	ans = max(ans, depth);
	for (int i = 0 ; i < arr[node].size(); i++) {
		int neks = arr[node][i];
		if (!visited[neks]) 
			dfs(neks, depth + 1);
	}
	visited[node] = false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1 ; i <= n ; i++) {
		int x;
		cin >> x;
		if (x != -1) arr[x].pb(i);
	}
	//ans = -1;
	for (int i = 1; i <= n ; i++) {
			dfs(i, 1);
	}
	cout << ( ans) << '\n';
	return 0;
}