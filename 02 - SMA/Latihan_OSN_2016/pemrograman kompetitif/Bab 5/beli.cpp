#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,d,i,j;
pair<ll,ll> A[100005];

bool comp(pair<ll,ll> a,pair<ll,ll> b){
	return a.first < b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> d;
	for (i = 0 ; i < n ; i++) {
		ll x,y;
		cin >> x >> y;
		A[i] = make_pair(x,y);
	}
	sort(A,A+n,comp);
	ll ans = 0;
	for (i = 0 ; i < n && d > 0; i++) {
		ll _can = (d/A[i].first);
		ans += min(_can,A[i].second);
		d -= min(_can,A[i].second)*(A[i].first);
	}
	cout << ans << '\n';
	return 0;
}