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

string dummy, s;
LL N, M, K;
LL fac[MAXN+5];

LL mul(LL a, LL b){
	return ((a%MODPRIME)*(b%MODPRIME))%MODPRIME;
}

LL power(LL a, LL b){
	if (b == 0) return 1;
	else if (b == 1) return a%MODPRIME;
	LL tmp = power(a, b/2);
	tmp = ((tmp%MODPRIME)*(tmp%MODPRIME))%MODPRIME;
	if (b%2 == 0) return tmp;
	else return mul(a, tmp);
}

void isi(){
	fac[0] = 1LL;
	for (int i = 1; i <= MAXN; i++){
		fac[i] = mul(fac[i-1], i);
	}
}

LL invers(LL x){
	return power(x, MODPRIME-2);
}

LL comb(LL M, LL K){
	LL pemb = fac[M];
	LL peny1 = invers(fac[K]);
	LL peny2 = invers(fac[M-K]);
	return mul(pemb, mul(peny1, peny2));
}

LL f[1005][1005];

void generate(){
	f[0][0] = 1;
	for (int i = 1; i <= 1000; i++){
		for (int j = 0; j <= i; j++){
			if (j == 0 || j == i)
				f[i][j] = 1;
			else f[i][j] = (f[i-1][j] + f[i-1][j-1])%MODPRIME;
		}
	}
}
int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	isi();
	// cout << comb(10, 10) << '\n';
	// cout << power(2, 31) << '\n';
	cin >> dummy >> N >> M >> K >> s;
	LL ans = 0;
	ans = comb(M, K);
	LL tmp = power(2, (N-1)*M);
	ans = mul(ans, tmp);
	cout << ans << '\n';
	return 0;
}