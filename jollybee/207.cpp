#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define MOD 1000000007
using namespace std;

typedef long long ll;

int t,n,m,i,j;
ll ans;

ll sqr(ll x) {return x*x;}
ll sisa(ll n,ll x){
	if (x==0) return 1;
	else if (x==1) return n%MOD;
	else if (x%2==0) return sqr(sisa(n,x/2)%MOD)%MOD;
	else if (x%2==1) return (n%MOD)*(sqr(sisa(n,(x-1)/2))%MOD);
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << (sisa(2,2*n)*m)%MOD << '\n';
	}
	return 0;
}