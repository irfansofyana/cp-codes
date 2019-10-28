#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

string s;
vector<int> arr, brr;
ll ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	int i = s.find("heavy",0);
	while (i >= 0 && i < s.size()) {
		arr.pb(i);
		i = s.find("heavy", i+1);
	}
	i = s.find("metal", 0);
	while (i >= 0 && i < s.size()) {
		brr.pb(i);
		i = s.find("metal", i+1);
	}
	for (int i = 0 ; i < arr.size(); i++) {
		int j = lower_bound(brr.begin(), brr.end(), arr[i]) - brr.begin();
		ans += (ll)brr.size()-j;
	}
	cout << ans << '\n';
	return 0;
}