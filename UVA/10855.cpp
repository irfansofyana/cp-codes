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
   				template v.1.3   
                                           
*/
#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(x) cerr << "#" << x << ": " << x << '\n';
#define FOR(i, a, b) for (int i = a; i <= b; i++)

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

int n, m;
char ** arr;
char ** brr;

int count(){
	int ret = 0;
	FOR(i, 0, n-m){
		FOR(j, 0, n-m){
			int r = 0;
			int c = 0;
			bool can = true;
			FOR(k, i, i+m-1){
				c = 0;
				FOR(l, j, j+m-1){
					if (arr[k][l] != brr[r][c]){
						can = false;
						break;
					}
					c++;	
				}
				if (!can) break;
				r++;
			}
			if (can) ret++;
		}
	}
	return ret;
}

void rotate(){
	char ** tmp = new char*[m];
	FOR(i, 0, m-1){
		tmp[i] = new char[m];
		FOR(j, 0, m-1){
			tmp[i][j] = brr[i][j];
		}
	}
	FOR(i, 0, m-1){
		for (int j = m-1; j >= 0; j--){
			tmp[i][m-1-j] = brr[j][i];
		}
	}
	FOR(i, 0, m-1){
		delete brr[i];
	}
	delete brr;
	brr = new char*[m];
	FOR(i, 0, m-1){
		brr[i] = new char[m];
		FOR(j, 0, m-1){
			brr[i][j] = tmp[i][j];
		}
	}
	FOR(i, 0, m-1){
		delete tmp[i];
	}
	delete tmp;
}

void solve(){
	// rotate();
	// FOR(i, 0, m-1){
	// 	FOR(j, 0, m-1){
	// 		cout << brr[i][j];
	// 	}
	// 	cout << '\n';
	// }
	// rotate();
	// FOR(i, 0, m-1){
	// 	FOR(j, 0, m-1){
	// 		cout << brr[i][j];
	// 	}
	// 	cout << '\n';
	// }
	// rotate();
	// FOR(i, 0, m-1){
	// 	FOR(j, 0, m-1){
	// 		cout << brr[i][j];
	// 	}
	// 	cout << '\n';
	// }
	FOR(i, 0, 3){
		cout << count();
		rotate();
		if (i == 3) cout << '\n';
		else cout << " ";
	}
}	

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	while (cin >> n >> m){
		if (n == 0 && m == 0) return 0;
		arr = new char* [n];
		FOR(i, 0, n-1){
			arr[i] = new char[n];
			FOR(j, 0, n-1){
				cin >> arr[i][j];
			}
		}
		brr = new char* [m];
		FOR(i, 0, m-1){
			brr[i] = new char[m];
			FOR(j, 0, m-1){
				cin >> brr[i][j];
			}
		}
		solve();
	}
	return 0;
}