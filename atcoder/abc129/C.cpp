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

int H, W;
char arr[405][405];
vector<ii> rest;
bool visit[405][405];
int dx[]={-1, 0, 0, 1};
int dy[]={0,-1,1,0};
LL ans, pagar, titik;

bool cek(int x, int y){
	return (x >= 0 && x < H && y >= 0 && y < W);
}

void DFS(int x, int y, int gil){
	if (gil == 0) pagar++;
	else titik++;
	arr[x][y] = '*';
	for (int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (cek(nx, ny) && arr[nx][ny] != '*'){
			if (gil == 0 && arr[nx][ny] == '.'){
				DFS(nx, ny, 1-gil);
			}else if (gil == 1 && arr[nx][ny] == '#'){
				DFS(nx, ny, 1-gil);
			}
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	cin >> H >> W;
	for (int i = 0; i < H; i++){
		for (int j = 0; j < W; j++){
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < H; i++){
		for (int j = 0; j < W; j++){
			if (arr[i][j] == '#'){
				pagar = 0;
				titik = 0;
				DFS(i, j, 0);
				ans += pagar * titik;
			} 
		}
	}
	cout << ans << '\n';
	return 0;
}