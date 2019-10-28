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

const int MAXN = 1e5+5;

int n, k, arr[MAXN];
multiset<int> ans;
map<int,int> frek;

void add(int x){
	frek[x]++;
	if (frek[x] == 1) ans.insert(x);
    else {
        if (ans.find(x) != ans.end()) 
            ans.erase(ans.find(x));
    }
}

void dec(int x){
	frek[x]--;
    if (frek[x] == 1) ans.insert(x);
    else if (frek[x] == 0) {
        if (ans.find(x) != ans.end())
            ans.erase(ans.find(x));
    }
}

void answer(){
	if (sz(ans) == 0) cout << "Nothing\n";
	else {
		auto ret = ans.end(); ret--;
		cout << *ret << '\n';
	}
}

int main(){
	#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
	#endif
    OPTIMIZE
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++){
    	if (i < k){
    		add(arr[i]);
    		if (i == k-1) {
    			answer();
    		}
    	}
    	else {
    		dec(arr[i-k]);
    		add(arr[i]);
    		answer();
    	}
    }
	return 0;
}