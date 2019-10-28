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

string s;
vector<ii> arr;
bool flag;
int num[2];

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	getline(cin, s);
	int i = 0;
	flag = false;
	while (i < sz(s)){
		if (s[i] == '[' || s[i] == ']') ++i;
		else if (s[i] == '(') {
			char a = s[i+1];
			char b = s[i+2];
			int bil = 0;
			if (b == ',') {
				bil = (int)a-'0';
				i += 2;
			}else {
				bil = 10*((int)a-'0') + ((int)b-'0');
				i += 3;
			}
			num[0] = bil;
		}
		else if (s[i] == ' ' || s[i] == ',' || s[i] == ')') ++i;
		else if (s[i] >= '0' && s[i] <= '9'){
			char a = s[i];
			char b = s[i+1];
			int bil = 0;
			if (b == ')') {
				bil = (int)a-'0';
				i += 2;
			}
			else {
				bil = 10*((int)a-'0') + ((int)b-'0'); 
				i += 2;
			}
			num[1] = bil;
			arr.pb({num[0], num[1]});
		}
	}
	// for (int i = 0; i < sz(arr); ++i){
	// 	cout << arr[i].fi << " " << arr[i].se << '\n';
	// }
	vector<ii> tmp;
	int turnOver = -1;
	bool ada = false;
	for (int i = 0; i < sz(arr); ++i){
		if (arr[i].fi <= arr[i].se){
			tmp.pb(arr[i]);
		}else {
			ada = true;
			tmp.pb({arr[i].fi, 50});
			tmp.pb({1, arr[i].se});
		}
	}
	sort(tmp.begin(), tmp.end());
	int l = 0;
	int r = 0;
	vector<ii> ans;
	for (int i = 0; i < sz(tmp); ++i){
		if (i == 0){
			l = tmp[i].fi;
			r = tmp[i].se;
		}else {
			if (tmp[i].fi <= r){
				r = max(r, tmp[i].se);
			}else {
				ans.pb({l, r});
				l = tmp[i].fi;
				r = tmp[i].se;
			}	
		}
	}
	ans.pb({l, r});
	turnOver = l;
	vector<ii> final;
	if (ada){
		for (int i = 1; i < sz(ans)-1; ++i){
			final.pb(ans[i]);
		}
		final.pb({turnOver, ans[0].se});
	}else {
		final = ans;
	}
	cout << "[";
	for (int i = 0; i < sz(final); ++i){
		cout << "("; cout << final[i].fi << ", " << final[i].se << ")";
		if (i == sz(final)-1){
			cout << "]\n";
		}else {
			cout << ", ";
		}
	}
	return 0;
}