#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = 10005;

typedef long long ll;

int N;
int warna[MAXN];
vector<int> arr[MAXN];
ll ans;
bool visited[MAXN];

void dfs(int node,int color) {
	visited[node] = true;
	int baru;
	if (warna[node] != color) {
		ans++;
		baru = warna[node];
	}
	else baru = color;
	
	for (auto a : arr[node]) {
		//a = arr[node][i] = neighbour
		if (!visited[a]) 
			dfs(a, baru);
	}
	/*for (int i = 0; i < arr[node].size(); i++){
		int neighbour = arr[node][i];
		if (!visited[neighbour])
			dfs(neighbour, baru);
	}*/
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 2; i <= N; i++) {
		int tmp;
		cin >> tmp;
		arr[i].pb(tmp);
		arr[tmp].pb(i);
	}
	for (int i = 1; i <= N; i++) cin >> warna[i];
	ans = 1;
	dfs(1, warna[1]);
	cout << ans << '\n';
	return 0;
}
