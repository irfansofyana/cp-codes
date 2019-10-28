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

const int MAXN = 4e5+5;

int n;
priority_queue<int> arr[5];

int ubah(string s){
	if (s == "11") return 0;
	else if (s == "10") return 1;
	else if (s == "01") return 2;
	else return 3;
}

bool cmp(int a, int b){
	return a > b;
}

int maxx(int a, int b, int c){
	return max(a, max(b, c));
}

bool valid(int satu, int dua, int tot){
	return (2 * satu >= tot && 2 * dua >= tot);
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	ans = 0LL;
	cin >> n;
	int satu = 0;
	int dua = 0;
	int tot = 0;
	for (int i = 0; i < n; i++){
		string s;
		int bil;
		cin >> s >> bil;
		if (s != "11"){
			arr[ubah(s)].push(bil);
		}else {
			ans += bil;
			satu++;
			dua++;
			tot++;
		}
	}
	while (true){
		int p1 = -1;
		int p2 = -1;
		int p3 = -1;
		if (!arr[1].empty()) p1 = arr[1].top();
		if (!arr[2].empty()) p2 = arr[2].top();
		if (!arr[3].empty()) p3 = arr[3].top();
		if (p1 == -1 && p2 == -1 && p3 == -1) break;
		
		
	}
	return 0;
}