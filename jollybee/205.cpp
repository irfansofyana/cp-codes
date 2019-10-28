#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,dx,dy,x,y;

ll fpb(ll a,ll b){
	return (b==0?a:fpb(b,a%b));
}

ll kpk(ll a,ll b){
	return a*b/fpb(a,b);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> x >> y >> dx >> dy;
	if (dx==0 && dy==0) cout << 1 << '\n';
	else if (dx==0) {
		j = kpk(dy,m)/dy;
		cout << j << '\n';
	}
	else if (dy==0) {
		i = kpk(dx,n)/dx;
		cout << i << '\n';
	}
	else {
		i = kpk(dx,n)/dx;
		j = kpk(dy,m)/dy;
		cout << kpk(i,j) << '\n';
	}
	return 0;
}