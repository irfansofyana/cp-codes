#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n, i, j;
vector<int> arr[200005];
int warna[200005], parent[200005];
bool visited[200005];

void dfs(int node){
	visited[node] = true;
	if (node == 1) {
		warna[node] = 1;
		int curr = 2;
		for (int z = 0 ; z < arr[node].size(); z++) {
			if (!visited[arr[node][z]]) {
				warna[arr[node][z]] = curr; curr++;
				parent[arr[node][z]] = node;
				dfs(arr[node][z]);
			}
		}
	}
	else {
		int curr = 1;
		for (int z = 0 ; z < arr[node].size(); z++) {
			if (!visited[arr[node][z]]) {
				int atas = parent[node];
				parent[arr[node][z]] = node;
				while (curr == warna[node] || curr == warna[atas]) curr++;
				warna[arr[node][z]] = curr; curr++;
				dfs(arr[node][z]);
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n-1; i++) {
		int a,b;
		cin >> a >> b;
		arr[a].pb(b); arr[b].pb(a);
	}
	dfs(1);
	for (i = 1 ; i <= n; i++) {
		cout << i << " " << " warnanya " << warna[i] << '\n';
	}
	return 0;
}
