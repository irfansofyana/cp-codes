#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,i;
ll A[25];

ll fpb(ll x,ll y){
	return (y==0?x:fpb(y,x%y));
}

ll kpk(ll x,ll y){
	return (x*y)/fpb(x,y);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	ll ans = 1;
	for (i = 0 ; i < n ; i++) {
		ans = kpk(ans,A[i]);
	}
	cout << ans << '\n';
	return 0;
}