#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,ans,_last;
pair<ll,ll> A[100005];

bool comp(pair<ll,ll> a,pair<ll,ll> b){
	if (a.second==b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n ;
	for (i = 0 ; i < n ; i++) {
		ll x,y;
		cin >> x >> y;
		A[i] = make_pair(x,x+y-1);
	}
	sort(A,A+n,comp);
	/*for (i = 0 ; i < n ; i++) {
		cout << A[i].first << " " << A[i].second << '\n';
	}*/
	ans = 1; _last = 0;
	for (i = 1 ; i < n ; i++) {
		if (A[i].first > A[_last].second) {
			_last = i;
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}