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

int n, arr[2005], cur;
map<int,int> st;
int depan[2005][2005], belakang[2005][2005];

bool can(int l, int r){
	for (int i = 0; i <= 2000; ++i){
		if (depan[l-1][i] + belakang[r+1][i] > 1) return false;
	}
	return true;
}

bool cek(){
	set<int> bil;
	for (int i = 0; i < n; ++i){
		if (bil.find(arr[i]) != bil.end()) return false;
		else bil.insert(arr[i]);
	}
	return true;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	cur = 1;
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
		if (st.find(arr[i]) != st.end()) {
			arr[i] = st[arr[i]];
		}else {
			st[arr[i]] = cur;
			arr[i] = cur;
			++cur;
		}
	}
	int ans;
	if (cek()) ans = 0;
	else ans = 1e9;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j <= 2000; ++j){
			if (i > 0) depan[i][j] = depan[i-1][j];
		}
		++depan[i][arr[i]];
	}
	for (int i = n-1; i >= 0; --i){
		for (int j = 0; j <= 2000; ++j){
			if (i < n-1) belakang[i][j] = belakang[i+1][j];
		}
		++belakang[i][arr[i]];
	}
	for (int i = 0; i < n; ++i){
		int lo = i;
		int hi = n-1;
		int ret = -1;
		while (lo <= hi){
			int mid = (lo + hi) >> 1;
			if (can(i, mid)){
				ret = mid;
				hi = mid-1;
			}else {
				lo = mid+1;
			}
		}
		if (ret != -1) ans = min(ans, ret-i+1);
		// if (ans == 1) {
		// 	cout << "x " << i << " " << ret << '\n';
		// }
	}
	cout << ans << '\n';
	return 0;
}