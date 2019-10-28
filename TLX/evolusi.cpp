#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,m,i,j;
map<string,string> parrent;
string a,b,ta,tb;
vector<string> ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	while (m--) {
		cin >> a >> b;
		parrent[b] = a;
	}
	cin >> a >> b;
	ta = a; tb = b;
	while (tb != a){
		ans.pb(tb);
		tb = parrent[tb];
		if (tb == "") break;
	}
	if (tb == a) {
		cout << a << '\n';
		for (i = (int)ans.size()-1; i >= 0 ; i--) {
			cout << ans[i] << '\n';
		}
		return 0;
	}
	else {
		ta = b; tb = a;
		ans.clear();
		while (tb != b) {
			ans.pb(tb);
			tb = parrent[tb];
			if (tb == "") break;
		}
		if (tb == b){
			cout << b << '\n';
			for (i = (int)ans.size()-1; i >= 0 ; i--) {
				cout << ans[i] << '\n';
			}
			return 0;
		}
		else cout << "TIDAK MUNGKIN\n";
	}
	return 0;
}