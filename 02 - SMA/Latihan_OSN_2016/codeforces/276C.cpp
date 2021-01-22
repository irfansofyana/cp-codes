#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,q,i,j;
ll update[200005];
ll arr[200005];
ll prefix[200005];
vector<pll> query,A;

bool comp(pll a, pll b){
	if (a.second == b.second) return a.first > b.first;
	return a.second > b.second;
}

bool descending(ll a,ll b){return a>b;}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> q;
	for (i = 1 ; i <= n ; i++)
		cin >> arr[i];
	sort(arr+1,arr+n+1,descending);
	/*for (i = 1; i <= n ; i++) {
		cout << arr[i] << " ";
	}cout << '\n'; */
	for (i = 0 ; i < q ; i++) {
		ll x,y;
		cin >> x >> y;
		query.push_back(make_pair(x,y));
		update[x]++;
		update[y+1]--;
	}
	ll sum = 0;
	for (i = 1 ; i <= n ; i++) {
		sum += update[i];
		A.push_back(make_pair(i,sum));
	}
	sort(A.begin(),A.end(),comp);
	j = 1;
	for (i = 0 ; i < A.size(); i++){
		prefix[A[i].first] = arr[j];
		j++;
	}
	/*for (i = 1 ; i <= n ; i++) {
		cout << prefix[i] << " ";
	}
	cout << '\n';*/
	for (i = 1 ; i <= n ; i++) {
		prefix[i] += prefix[i-1];
	}
	ll ans = 0;
	for (i = 0 ; i < query.size(); i++){
		ans += prefix[query[i].second]-prefix[query[i].first-1];
	}
	cout << ans << '\n';
	return 0;
}