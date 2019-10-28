#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
vector<ll> A;

bool comp(ll a,ll b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n ;
	for (i = 0 ; i < n ; i++) {
		cin >> m;
		A.push_back(m);
	}
	sort(A.begin(),A.end(),comp);
	ll ans = 0;
	for (i = 2 ; i < A.size(); i+= 3) {
		ans += A[i];
	}
	cout << ans <<'\n';
	return 0;
}