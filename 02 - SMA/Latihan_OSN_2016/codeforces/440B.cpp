#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,i,j;
vector<pll> lebih,kurang;
ll ans,sum;
ll arr[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sum /= n;
	for (i = 0 ; i < n ; i++) {
		if (arr[i] < sum) {
			kurang.push_back(mp(i,sum-arr[i]));
		}
		else if (arr[i] > sum) {
			lebih.push_back(mp(i,arr[i]-sum));
		}
	}
	i = 0; j = 0;
	while (i < kurang.size() && j < lebih.size()) {
		if (kurang[i].second > lebih[j].second) {
			ll tmp = abs(kurang[i].first-lebih[j].first);
			ans += tmp*lebih[j].second;
			kurang[i].second -= lebih[j].second;
			j++;
		}
		else {
			ll tmp = abs(kurang[i].first-lebih[j].first);
			ans += tmp*kurang[i].second;
			lebih[j].second -= kurang[i].second;
			i++;
		}
	}
	cout << ans << '\n';
	return 0;
}