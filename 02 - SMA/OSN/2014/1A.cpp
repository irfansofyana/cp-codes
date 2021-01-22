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


int N;
ii arr[500005];
string dummy;
double ans;
bool can[2005], tmp[2005];

double toradian(double a){
	return (a*(acos(-1)))/180;
}

double sqr(int v){
	return 1.00 * v * v;
}

double jarak(int v,double sudut){
	return abs(2 * sqr(v) * sin(toradian(sudut))* cos(toradian(sudut)) * 9.8);
}


int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> dummy;
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> arr[i].fi >> arr[i].se;
	}
	sort(arr, arr + N);
	cout << fixed << showpoint << setprecision(12);
	memset(can, false, sizeof can);
	can[0] = true;
	bool full = false;
	int start = -1;
	for (int i = 0; i < N; i++){
		for (int j = 0; j <= 1800; j++){
			if (j >= arr[i].se && can[j-arr[i].se]){
				double tm = jarak(arr[i].fi, 0.1*j);
				if (tm > ans) {
					ans = tm;
				}
			}
		}
		for (int j = 0; j <= 1800; j++){
			tmp[j] = can[j];
			if (j >= arr[i].se) {
				tmp[j] = (can[j] || can[j-arr[i].se]);
			}
		}
		int tung = 0;
		for (int j = 0; j <= 1800; j++){
			can[j] = tmp[j];
			if (can[j]) tung++;
		}
		if (tung == 1801){
			full = true;
			start = i;
			break;
		}
	}
	if (full) {
		ans = max(ans, jarak(arr[N-1].fi, 45.0));
	}
	cout << fabs(sin(toradian(450+901))*cos(toradian(450+901))) << '\n';
	cout << fabs(sin(toradian(450+449))*cos(toradian(450+449))) << '\n';
	cout << ans << '\n';
	return 0;
}
