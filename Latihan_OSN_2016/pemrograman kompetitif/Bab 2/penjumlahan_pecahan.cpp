#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c,d;
ll x,y;

ll fpb(ll x,ll y){
	return (y==0?x:fpb(y,x%y));
}

ll kpk(ll x,ll y){
	ll c = fpb(x,y);
	if (x>y) x/=c;
	else y/=c;
	return x*y;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b >> c >> d;
	
	ll f1 = fpb(a,b);
	a/=f1; b/=f1;
	
	ll f2 = fpb(c,d);
	c/=f2; d/=f2;
	
	y = kpk(b,d);
	x = (y/b)*a+(y/d)*c;
	
	ll f3 = fpb(x,y);
	
	x/=f3; y/=f3;
	
	cout << x << " " << y << '\n';
	return 0;
}