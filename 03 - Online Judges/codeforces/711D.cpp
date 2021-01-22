#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

const int MAXN = 2e5+5;
const LL MOD = 1e9 + 7;

int n, num;
int adj[MAXN],cnt;
int visit[MAXN];
bool visited[MAXN];
vector<int> cycle;
LL ans;

void DFS(int node, int now){
	visit[node] = now;
	if (visit[adj[node]] == -1) DFS(adj[node], now);
	else if (visit[adj[node]] == now){
		cycle.pb(adj[node]);
		return;
	}else return;
}

void DFS2(int node){
	visited[node] = true;
	cnt++;
	if (!visited[adj[node]]) DFS2(adj[node]);
	else return;
}

LL power(LL a, LL b){
	if (b == 0) return 1;
	else if (b == 1) return a%MOD;
	LL tmp = power(a, b/2);
	tmp = (tmp * tmp)%MOD;
	if (b%2 == 0) return tmp;
	else return ((a%MOD)*tmp)%MOD;
}

int main(){
	#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
	#endif
	OPTIMIZE
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> adj[i];
	}
	memset(visit, -1, sizeof visit);
	num = 1;
	for (int i = 1; i <= n; i++){
		if (visit[i] == -1){
			DFS(i, num);
			num++;
		}
	}
	memset(visited, false, sizeof visited);
	int rem = n;
	ans = 1;
	for (int i = 0; i < cycle.size(); i++){
		if (!visited[cycle[i]]){
			cnt = 0;
			DFS2(cycle[i]);
			rem -= cnt;
			ans = (ans * (power(2, cnt)-2)) % MOD;
		}
	}
	ans = (ans * (power(2, 1LL*rem)))%MOD;
	cout << ans << '\n';
	return 0;
}

