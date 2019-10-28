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

LL k, comb[5005][5005];
LL ans, ret;

LL sum(LL a, LL b){
	return (a+b)%MODPRIME;
}

LL product(LL a, LL b){
	a %= MODPRIME;
	b %= MODPRIME;
	return (a*b)%MODPRIME;
}

void isi(){
	comb[0][0] = 1;
	for (int i = 1; i <= 5000; i++){
		for (int j = 0; j <= i; j++){
			if (j == 0 || j == i) comb[i][j] = 1LL;
			else comb[i][j] = sum(comb[i-1][j], comb[i-1][j-1]);
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	isi();
	cin >> k;
	ans = 1;
	for (int i = 0; i < k; i++){
		LL bil; cin >> bil;
		if (i == 0) {
			ret += bil;
			continue;
		}
		else {
			ans = product(ans, comb[ret+1+bil-1-1][bil-1]);
			ret += bil;
		}
	}
	cout << ans << '\n';
	return 0;
}