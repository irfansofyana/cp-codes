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

string s;
vector<pair<string,string> > arr;

bool cmp(pair<string,string> a, pair<string,string> b){
	if (a.fi == b.fi) return a.se < b.se;
	return a.fi < b.fi;
}

int main(){
	// #ifndef ONLINE_JUDGE
 //    	freopen("in.txt", "r", stdin);
	// #endif
	while (cin >> s){
		if (s == "#") break;
		string tmp = s;
		for (int i = 0 ; i < sz(tmp); i++){
			if (tmp[i] >= 'A' && tmp[i] <= 'Z') {
				tmp[i] = char(tmp[i] + 32);
			}
		}
		sort(tmp.begin(), tmp.end());
		arr.pb({tmp, s});
	}
	sort(arr.begin(), arr.end(), cmp);
	int i = 0;
	vector<string> ans;
	while (i < sz(arr)){
		int j = i + 1;
		int frek = 1;
		while (j < sz(arr) && arr[j].fi == arr[i].fi){
			frek++;
			j++;
		}
		if (frek == 1) ans.pb(arr[i].se);
		i = j;
	}
	sort(ans.begin(), ans.end());
	for (auto a : ans)
		cout << a << '\n';
	return 0;
}