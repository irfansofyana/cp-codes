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

const int MAXK = 1e5;

int k, limit;
int nilai[1005];

void isi(){
	for (int i = 1; i < 1005; ++i){
		nilai[i] = (i*(i-1))/2;
		if (nilai[i] > MAXK) {
			limit = i-1;
			break;
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	isi();
	vector<ii> ans;
	cin >> k;
	if (k == 0) {
		cout << "a\n";
		return 0;
	}
	for (int i = limit; i >= 2; --i){
		if (nilai[i] > k) continue;
		else {
			//k >= nilai[i]
			int bagi = k / nilai[i];
			ans.pb({i, bagi});
			k %= nilai[i];
		}
	}
	int it = 0;
	for (auto a : ans){
		for (int i = 0; i < a.se; ++i){
			for (int j = 0; j < a.fi; ++j){
				cout << char(it+'a');
			}
			++it;
		}	
	}cout << '\n';
	return 0;
}