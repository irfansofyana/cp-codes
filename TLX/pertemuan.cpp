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

int n;
string arr[505];

bool cmp(string a, string b){
	if (sz(a) == sz(b)) return a < b;
	return sz(a) < sz(b);
}

int main(){
	// #ifndef ONLINE_JUDGE
 //    	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++){
		cout << arr[i] << '\n';
	}
	return 0;
}