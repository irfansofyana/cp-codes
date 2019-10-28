#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long ll;

ll n,m,i,j;

ll sqr(ll x){
	return x*x;
}

ll pangkat(ll a,ll b){
	if (b==0) return 1;
	else if (b==1) return (a%MOD);
	else if (b%2==0) return sqr(pangkat(a,b/2)%MOD)%MOD;
	else if (b%2==1) return ((a%MOD)*(sqr(pangkat(a,(b-1)/2)%MOD)%MOD))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> m;
		cout << pangkat(2,m-1) << '\n';
	}
	return 0;
}