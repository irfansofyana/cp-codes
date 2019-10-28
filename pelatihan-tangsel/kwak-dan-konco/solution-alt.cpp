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

const int MAXN = 150005;

int N, k1, k2, k3;
int arr[5][MAXN];
int permutate[4];
LL dp[MAXN][5];
LL ans;

LL cari(int indeks, int kelompok){
	if (indeks == N+1 && kelompok == 3) return 0;
	else if (indeks == N+1) return 100000000000;
	else if (dp[indeks][kelompok] != -1) return dp[indeks][kelompok];
	LL tmp = 0LL;
	LL mini = 100000000000LL;
	if (indeks == 1){
		tmp = arr[k1][indeks] + cari(indeks + 1, kelompok);
	}else {
		if (kelompok == 1){
			tmp = arr[k1][indeks] + cari(indeks + 1, kelompok);
			tmp = min(tmp, arr[k2][indeks] + cari(indeks + 1, kelompok+ 1));
		}else if (kelompok == 2){
			tmp = arr[k2][indeks] + cari(indeks + 1, kelompok);
			tmp = min(tmp, arr[k3][indeks] + cari(indeks + 1, kelompok+ 1));	
		}else if (kelompok == 3) {
			tmp = arr[k3][indeks] + cari(indeks + 1, kelompok);
		}
	}
	return dp[indeks][kelompok] = tmp;
}

void solve(){
	for (int i = 0; i < 3; i++){
		permutate[i] = i;
	}
	ans = 1e9;
	do{
		k1 = permutate[0];
		k2 = permutate[1];
		k3 = permutate[2];
		// cout << k1 << " " << k2 << " " << k3 << '\n';
		memset(dp, -1, sizeof dp);
		// cout << tmp << '\n';
		ans = min(ans, cari(1, 1));
	}while (next_permutation(permutate, permutate+3));
	cout << ans << '\n';
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> N;
	for (int i = 0; i < 3; i++){
		for (int j = 1; j <= N; j++){
			cin >> arr[i][j];
		}
	}
	solve();
	return 0;
}