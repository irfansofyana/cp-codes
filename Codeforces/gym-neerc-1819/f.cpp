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

const int MAXN = 1e6+6;

int n;
int ada[MAXN][30];
int unluck[MAXN];
int ans[MAXN];

int cnt(int x){
	int ret = 0;
	while (x > 0){
		ret += x%10;
		x /= 10;
	}
	return ret;
}

void generate(){
	for (int i = 0; i < 1000000; i++){
		if (i > 0){
			for (int j = 0; j <= 27; j++){
				ada[i][j] = ada[i-1][j];
				if (j == unluck[i-1]) ada[i][j]++;
			}
		}
		int j = i;
		j = i % 1000;
		unluck[i] = cnt(j);
		j = i / 1000;
		unluck[i] = abs(cnt(j) - unluck[i]);
		int ret = 0;
		if (i == 0) ans[i] = 0;
		else {
			for (int j = 0; j < unluck[i]; j++)
				ret += ada[i][j];
			ans[i] = ret;
		}		
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	generate();
	cin >> n;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		cout << ans[x] << '\n';
	}
	return 0;
}