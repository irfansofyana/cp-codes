#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;
 
const int MAXN = 1e5 + 5;

int n, arr[MAXN];
int q, x, y;

int main(){
	// #ifndef ONLINE_JUDGE
 //    	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	cin >> q;
	while (q--) {
		cin >> x >> y;
		int lo = upper_bound(arr, arr + n, x) - arr;
		int hi = upper_bound(arr, arr + n, y) - arr;
		hi--;
		cout << max(0, hi-lo+1) << '\n';
	}
	return 0;
}