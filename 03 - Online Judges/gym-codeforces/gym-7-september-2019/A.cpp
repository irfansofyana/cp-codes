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

int n;
string s;
char arr[1005][1005];
char tmp[1005][1005];

int f(int x){
	if (x >= 0) return x%4;
	else {
		int xx = abs(x);
		int k = xx / 4;
		return (4 * (k+1) + x) % 4;
	}
}

char ubah(char c){
	if (c == '.') return '.';
	else if (c == '^') return '>';
	else if (c == '>') return 'v';
	else if (c == '<') return '^';
	else if (c == 'v') return '<';
}

// ^.v
// >.<
// ^.v
int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> s;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j)
			cin >> arr[i][j];
	}
	int sum = 0;
	for (int i = 0; i < sz(s); ++i){
		if (s[i] == 'R') ++sum;
		else --sum;
	}
	int rotate = f(sum);
	// cout << rotate << '\n';
	for (int x = 0; x < rotate; ++x){
		for (int col = 0; col < n; ++col){
			for (int row = n-1; row >= 0; --row){
				tmp[col][n-1-row] = ubah(arr[row][col]);		
			}
		}
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				arr[i][j] = tmp[i][j];
			}
		}
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cout << arr[i][j];
		}cout << '\n';
	}
	return 0;
}