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

LL r, c, q, sx, sy;
pair<LL,LL> a1, a2;
LL resp, fi;

void ask(LL a, LL b){
	cout << "? " << a << " " << b << '\n';
	cout << flush;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	// OPTIMIZE
	cin >> r >> c >> q;
	ask(1, 1);
	cin >> resp;
	fi = resp;
	LL mulai = max(0LL, 1+resp-c);
	sx = 1+mulai; sy = 1+resp-mulai;
	while (1 && sx <= r && sy >= 1){
		ask(sx, sy);
		cin >> resp;
		if (resp == 0){
			a1 = {sx, sy};
			break;
		}
		else {
			sx++;
			sy--;
		}
	}
	ask(r, c);
	fi = abs(r-a1.fi) + abs(c-a1.se);
	cin >> resp;
	if (resp == fi){
		sx++; sy--;
		bool ada = false;
		while (1 && sx <= r && sy >= 1){
			ask(sx, sy);
			cin >> resp;
			if (resp == 0){
				ada = true;
				a2 = {sx, sy};
				break;
			}else {
				sx++;
				sy--;
			}
		}
		if (!ada) a2 = a1;
	}else{
		LL x = max(resp-c+1, 0LL);
		sx = r-x; sy = c-resp+x;
		while(1 && sx >= 1 && sy <= c){
			ask(sx, sy);
			cin >> resp;
			if (resp == 0){
				a2 = {sx, sy};
				break;
			}else{
				sx--;
				sy++;
			}
		}
	}
	cout << "! " << a1.fi << " " << a1.se << " " << a2.fi << " " << a2.se << '\n';	
	cout << flush;
}