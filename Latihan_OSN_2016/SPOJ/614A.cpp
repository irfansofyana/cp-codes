#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll l,r,k;
ll curr;
vector<ll> ans;
ll i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> l >> r >> k;
	curr = 1;
	for (i = 1 ; i > 0 ; i++) {
		//cout << curr << '\n';
		if (curr >= l && curr <= r) ans.push_back(curr);
		else if (curr > r) break;
		if (curr > (r/k)) break;
		else curr *= k;
	}
	if (ans.size() > 0)
		for (i = 0 ; i < ans.size(); i++) {
			cout << ans[i];
			cout << (i==(ll)ans.size()-1 ? '\n' : ' ');
		}
	else 
		cout << -1 << '\n';
	return 0;
}