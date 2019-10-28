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

int q, n;
map<int,int> satu, nol;
map<int,bool> udah;
map<int,int> ngambil;
int tsatu, tnol;

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> q;
	while (q--) {
		cin >> n;
		udah.clear();
		satu.clear();
		nol.clear();
		for (int i = 0; i < n; i++){
			int x, t; cin >> x >> t;
			if (t == 1) satu[x]++;
			else nol[x]++;
		}
		priority_queue<ii> pq;
		for (auto el : satu) pq.push({el.se, el.fi});
		int last = 1e9;
		tsatu = 0; tnol = 0;
		while (!pq.empty() && last != 1){
			int now = pq.top().fi; 
			int bil = pq.top().se;
			pq.pop();
			if (last == 1e9){
				tsatu += now;
				last = now;
				udah[now] = true;
				ngambil[bil] = now;
				satu[bil] -= ngambil[bil];
			}else {
				tsatu += min(last-1, now);
				udah[min(last-1, now)] = true;
				last = min(last-1, now);
				ngambil[bil] = last;
				satu[bil] -= ngambil[bil];
			}
		}
		
		priority_queue<ii> pq1;
		for (auto el : nol) pq1.push({el.se, el.fi});
		while (!pq1.empty()){
			int banyak = pq1.top().fi;
			int bil = pq1.top().se;
			pq1.pop();
			for (int i = banyak; i >= 0 ; i--){
				if (!udah[ngambil[bil]+i]){
					tnol += i;
					udah[ngambil[bil]] = false;
					ngambil[bil] += i;
					udah[ngambil[bil]+i] = true;
					break;
				}
			}
		}
		for (auto a : satu){
			if (a.se > 0){
				int banyak = a.se;
				int bil = a.fi;
				for (int i = banyak; i >= 0; i--){
					if (!udah[ngambil[bil]+i]){
						tsatu += i;
						udah[ngambil[bil]] = false;
						ngambil[bil] += i;
						udah[ngambil[bil]+i] = true;
						break;
					}
				}
			}
		}
		cout << tsatu+tnol << " " << tsatu << '\n';
	}
	return 0;
}