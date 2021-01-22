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

int n, cnt, ans;
map<string,int> mep;
vector<int> adj[1005];
bool visit[1005];

int dfs(int node){
	visit[node] = true;
	int ret = -1;
	for (int i = 0; i < sz(adj[node]); i++){
		int neigh = adj[node][i];
		if (!visit[neigh])
			ret = max(ret, dfs(neigh));
	}
	if (ret == -1) return 1;
	return ret+1;
}

int ganti(string s){
	if (mep.find(s) == mep.end()){
		mep[s] = cnt;
		cnt++;
	}
	return mep[s];
}

string ubah(string s){
	string res = "";
	for (int i = 0; i < sz(s); i++){
		if (s[i] >= 'A' && s[i] <= 'Z')
			res += s[i]-'A'+'a';
		else res += s[i];
	}
	return res;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	cnt = 1;
	for (int i = 0; i < n; i++){
		string a, b, c;
		cin >> a >> b >> c;
		a = ubah(a);
		c = ubah(c);
		int ba = ganti(a);
		int bc = ganti(c);
		adj[bc].pb(ba);
		// cout << "xxx " << ba << " " << bc << endl;
	}
	cout << dfs(ganti("polycarp")) << '\n';
	return 0;
}