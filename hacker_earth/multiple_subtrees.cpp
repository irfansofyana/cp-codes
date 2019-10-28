#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp(x) freopen(x.txt, "r", stdin);
#define out(x) freopen(x.txt, "w", stdout);
#define IO inp() out()
#define spacnl(i, n) cout << (i == n-1 ? '\n' : ' ');

//typedef Lists
typedef long long LL;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;

//constant values
const double pi = acos(-1);
const LL MODPRIMA = (LL)1e9 + 7;
const LL MAXX = (LL)1e18;
const LL MINN = -(LL)1e18;
const double EPS = 1e-9;

//declare variables here
const int MAXN = 1e5;
LL prefix[MAXN+5];
LL cnt[MAXN+5];
int height[MAXN+5];
int N, Q, a, b;
vector<int> adj[MAXN+5];
bool visit[MAXN+5];
int parent[MAXN+5];

void DFS(int node, LL sum, int d){
	visit[node] = true;
	LL tmp = 0;
	for (int i = 0; i < adj[node].size(); i++){
		int nxt = adj[node][i];
		if (!visit[nxt]){
			tmp++;
		}
	}
	sum += tmp;
	prefix[node] = sum;
	cnt[node] = tmp;
	height[node] = d;
	for (int i = 0; i < adj[node].size(); i++){
		int nxt = adj[node][i];
		if (!visit[nxt]){
			parent[nxt] = node;
			DFS(nxt, sum, d+1);
		}
	}
}

int main(){
  OPTIMATION
	cin >> N;
	for (int i = 0; i < N-1; i++){
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}  
	DFS(1, 0, 1);
	cin >> Q;
	while (Q--){
		cin >> a;
		cout << cnt[a] + prefix[parent[a]] - height[parent[a]] << '\n';
	}
	return 0;
}