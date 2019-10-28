/*
                                               
 ____                 ______           _____   
|    |            ___|\     \      ___|\    \  
|    |           |    |\     \    |    |\    \ 
|    |           |    |/____/|    |    | |    |
|    |        ___|    \|   | |    |    |/____/|
|    |       |    \    \___|/     |    ||    ||
|    |       |    |\     \        |    ||____|/
|____|  ___  |\ ___\|_____|  ___  |____|       
|    | |   | | |    |     | |   | |    |       
|____| |___|  \|____|_____| |___| |____|       
  \(             \(    )/           \(         
   '              '    '             '      
   				template v.1.4   
                                           
*/
#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(x) cerr << "#" << x << ": " << x << '\n';
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = b; i >= a; i--)
#define FORL(i, a, b) for (LL i = a; i <= b; i++)
#define FORDL(i, a, b) for (LL i = b; i >= a; i--)

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

const LL MODPRIME = 1e9 + 7;
const double EPS  = 1e-12;
const LL MAXL = 4e18;
const LL MINL = -4e18;
const int MAXI = 2e9;
const int MINI = -2e9;

const int MAXN = 1e6;

int N, M;
int parent[MAXN+3];
int ans[MAXN+3];
int arr[MAXN+3];
vector<int> bilangan[MAXN+3];
vector<int> posisi[MAXN+3];

void init(int n){
	for (int i = 1; i <= n; i++)
		parent[i] = i;
}

int findSet(int x){
	return parent[x] == x ? x : parent[x] = findSet(parent[x]);
}

void unionSet(int a, int b){
	int pa = findSet(a);
	int pb = findSet(b);
	if (pa != pb){
		if (rand()%2) swap(pa, pb);
		parent[pb] = pa;
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> N >> M;
	init(N);
	for (int i = 1; i <= N; i++)
		cin >> arr[i];
	for (int i = 0; i < M; i++){
		int x, y;
		cin >> x >> y;
		unionSet(x, y);
	}
	for (int i = 1; i <= N; i++){
		posisi[findSet(i)].pb(i);
		bilangan[findSet(i)].pb(-1*arr[i]);
	}
	for (int i = 1; i <= N; i++){
		if (sz(posisi[i])) 
			sort(posisi[i].begin(), posisi[i].end());
		if (sz(bilangan[i]))
			sort(bilangan[i].begin(), bilangan[i].end());
	}
	for (int i = 1; i <= N; i++){
		for (int j = 0; j < sz(posisi[i]); j++){
			ans[posisi[i][j]] = -1*bilangan[i][j];
		}
	}
	for (int i = 1; i <= N; i++){
		cout << ans[i];
		cout << (i == N ? '\n' : ' ');
	}
	return 0;
}