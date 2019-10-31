#include <bits/stdc++.h>
using namespace std;

const int MAXN = 300;

int n, num, connect[MAXN+5], arr[MAXN+5];
bool visit[MAXN+5];
vector<int> adj[MAXN+5];
pair<int,int> q[MAXN+5], p[MAXN+5];


void dfs(int node){
	visit[node] = true;
	connect[node] = num;
	for (auto neks : adj[node]){
		if (!visit[neks]){
			dfs(neks);
		}
	}
}

bool cmp(pair<int,int> a, pair<int,int> b){
	if (a.first == b.first) {
		return a.second < b.second;
	}
	return a.first < b.first;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; ++i){
		cin >> arr[i];
	}
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= n; ++j){
			char bil;
			cin >> bil;
			if (bil == '1'){
				adj[i].push_back(j);
			}
		}
	}
	num = 1;
	for (int i = 1; i <= n; ++i){
		if (!visit[i]){
			dfs(i);
			++num;
		}
	}
	for (int i = 1; i <= n; ++i){
		p[i].first = connect[i];
		p[i].second = arr[i];

		q[i].first = connect[i];
		q[i].second = i;
	}
	sort(p + 1, p + n + 1, cmp);
	sort(q + 1, q + n + 1, cmp);
	for (int i = 1; i <= n; ++i){
		arr[q[i].second] = p[i].second;
	}
	for (int i = 1; i <= n; ++i){
		cout << arr[i] << (i == n ? '\n' : ' ');
	}
	return 0;
}