#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,t;
map<string,int> mep;
string s,jenis;
vector<string> ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		mep.clear();
		ans.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> s >> jenis;
			mep[jenis]++;
			if (mep[jenis]==1) ans.push_back(jenis);
		}
		ll res = 1;
		for (i = 0 ; i < ans.size(); i++) res *= (mep[ans[i]]+1);
		res--;
		cout << res << '\n';
	}
	return 0;
}