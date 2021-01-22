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
int arr[55][55];
bool udah[55][55];

void solve(int x, int y){
	udah[x][y] = true;
}

bool cek1(int x, int y){
	if (arr[x][y] == 1 && y+1 < m && arr[x][y+1] == 1){
		if (x+1 < n && arr[x+1][y] == 1 && y+1 < m && arr[x+1][y+1] == 1){
			return true;
		}
	}
	return false;
}

bool cek2(int x, int y){
	if (arr[x][y] == 1 && y-1 >= 0 && arr[x][y-1] == 1){
		if (x+1 < n && arr[x+1][y] == 1 && y-1 >= 0 && arr[x+1][y-1] == 1){
			return true;
		}
	}
	return false;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m;
	memset(udah, false, sizeof udah);
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> arr[i][j];
		}
	}
	vector<ii> ans;
	for (int i = 0; i < n; ++i){
		int j =0;
		while (j < m){
			if (arr[i][j] == 1){
				if (cek1(i, j)){
					// cout << "1 " << i << " " << j << '\n';
					ans.pb({i, j});
					solve(i, j); solve(i, j+1);
					solve(i+1, j); solve(i+1, j+1);
				}else if (cek2(i, j)){
					// cout << "2 " << i << " " << j << '\n';
					ans.pb({i, j-1});
					solve(i, j-1); solve(i, j);
					solve(i+1, j-1); solve(i+1, j);
				}else {
					if (!udah[i][j]) {
						cout << "-1\n";
						return 0;
					}
				}
			}
			++j;
		}
	}
	sort(ans.begin(), ans.end());
	ans.erase(unique(ans.begin(), ans.end()), ans.end());
	cout << sz(ans) << '\n';
	for (auto a : ans){
		cout << a.fi+1 << " " << a.se+1 << '\n';
	}
	return 0;
}