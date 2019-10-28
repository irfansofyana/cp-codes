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

string s;
string curr;

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	// OPTIMIZE
	while (cin >> s){
		deque<string> ans;
		curr = "";
		bool bck = true;
		FOR(i, 0, sz(s)-1){
			if (s[i] != '[' && s[i] != ']'){
				curr = curr + s[i];
			}else if (s[i] == '['){
				if (bck) ans.push_back(curr);
				else ans.push_front(curr);
				curr = "";
				bck = false;
			}else {
				if (bck) ans.push_back(curr);
				else ans.push_front(curr);
				curr = "";
				bck = true;
			}
		}
		// cout << "ngen\n";
		if (bck) ans.push_back(curr);
		else ans.push_front(curr);
		while (!ans.empty()){
			if (ans.front()!="") cout << ans.front();
			ans.pop_front();
		}cout << '\n';
	}
	return 0;
}