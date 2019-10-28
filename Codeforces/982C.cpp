#include <bits/stdc++.h>
using namespace std;

const int MAXN = (int)1e5 + 5;

int N, jaw;
vector<int> arr[MAXN];
bool visit[MAXN];
int nilai[MAXN];

void pre(int node){
	visit[node] = true;
	bool yes = false;
	int ans = 0;
	for (int i = 0 ; i < arr[node].size(); i++) {
		if (!visit[arr[node][i]]) {
			yes = true;
			pre(arr[node][i]);
			ans += nilai[arr[node][i]];
		}
	}
	if (!yes) nilai[node] = 1;
	else nilai[node] = ans + 1;
}

void dfs(int node){
	visit[node] = true;
	for (int i = 0 ; i < arr[node].size(); i++) {
		if (!visit[arr[node][i]]) {
			if (nilai[arr[node][i]] % 2 == 0) {
				jaw++;
				dfs(arr[node][i]);
			}
			else dfs(arr[node][i]);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0 ; i < N-1; i++) {
		int x, y;
		cin >> x >> y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}
	if (N % 2 != 0) cout << -1 << '\n';
	else {
		pre(1);
		memset(visit, false, sizeof visit);
		dfs(1);
		cout << jaw << '\n';
	}
	return 0;
}