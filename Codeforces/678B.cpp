#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll ans;
ll n, a, b, p, q;

ll gcd(ll a,ll b){
	return (b == 0 ? a : gcd(b, a%b));
}

ll lcm(ll a,ll b){
	return (a*b)/gcd(a,b);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> a >> b >> p >> q;
	ll both = n/lcm(a,b);
	ll merahd = (n/a) - both;
	ll birud = (n/b) - both;
	ans += merahd*p + birud*q;
	if (p > q) ans += both*p;
	else ans += both*q;
	cout << ans << '\n';
	return 0;
}