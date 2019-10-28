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

const int MAXN = 1e5;

int n;
string s;
LL arr[MAXN+2];
LL dp[MAXN+2][7];

LL cari(int idx, int udah){
	if (udah == 4) return -1e18;
	if (idx == n && udah != 4) return 0;
	if (dp[idx][udah] != -1) return dp[idx][udah];
	LL ambil=0;
	LL skip=0;
	if (s[idx] == 'h'){
		//skip
		if (udah == 0) skip = cari(idx+1, 1);
		else skip = cari(idx + 1, udah);

		//ambil
		ambil = cari(idx + 1, udah) + arr[idx];
	}else if (s[idx] == 'a') {
		//skip
		if (udah == 1) skip = cari(idx + 1, 2);
		else skip = cari(idx + 1, udah);

		//ambil
		ambil = cari(idx + 1, udah) + arr[idx];
	}else if (s[idx] == 'r'){
		//skip
		if (udah == 2) skip = cari(idx + 1, 3);
		else skip = cari(idx + 1, udah);

		//ambil
		ambil = cari(idx + 1, udah) + arr[idx];
	}else if (s[idx] == 'd'){
		//skip
		if (udah == 3) skip = cari(idx + 1, 4);
		else skip = cari(idx + 1, udah);

		//ambil
		ambil = cari(idx + 1, udah) + arr[idx];
	}else {
		//skip
		skip = cari(idx + 1, udah);
		//ambil
		ambil = cari(idx + 1, udah) + arr[idx];
	}
	LL ans;
	if (skip < 0) ans = ambil;
	else if (ambil < 0) ans = skip;
	else ans = min(skip, ambil);
	return dp[idx][udah] = ans;	
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	cin >> n >> s;
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	memset(dp, -1, sizeof dp);
	cout << cari(0, 0) << '\n';
	return 0;
}