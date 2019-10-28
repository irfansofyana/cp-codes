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

int n;
string s;

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> s;
	int sum = 0;
	bool found = false;
	int last = -1;
	for (int i = 0; i < n; ++i){
		if (s[i] == '(') sum++;
		else if (s[i] == ')'){
			sum--;
			if (sum == -1) {
				found = true;
				last = i;
				break;
			}
		}
	}
	if (!found && sum == 0){
		cout << "Yes\n";
		return 0;
	}else if (!found){
		cout << "No\n";
		return 0;
	}
	sum = 0;
	for (int i = last+1; i < n; ++i){
		if (sum < 0){
			cout << "No\n";
			return 0;
		}
		if (s[i] == '(') sum++;
		else if (s[i] == ')') sum--;
	}
	if (sum == 1){
		cout << "Yes\n";
	}else {
		cout << "No\n";
	}
	return 0;
}