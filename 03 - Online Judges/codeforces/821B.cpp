#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll m, b;

ll query(ll a,ll b,ll c,ll d){
	ll tmp1 = d - b + 1;
	ll tmp2 = c - a + 1;
	ll tmp3 = (c*(c+1))/2; 
	tmp3 -= ((a-1)*(a))/2;
	ll tmp4 = (d*(d+1)/2);
	tmp4 -= ((b-1)*b)/2;
	return tmp1 * tmp3 + tmp2 * tmp4;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> m >> b;
	ll x = b*m;
	ll ans = 0;
	for (ll i = x ; i >= 0; i--) {
		double tt = -1.0*i;
		tt /= (double)m; tt += 1.0*b;
		//cout << tt << '\n';
		ll y = (ll)tt;
		if (query(0,0,i,y) > ans) ans = query(0,0,i,y);
	}
	cout << ans << '\n';
	return 0;
}