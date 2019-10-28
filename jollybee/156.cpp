#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define MOD  1000000007
using namespace std;

typedef long long ll;

ll n,ans,temp;
int t;

ll sqr(ll x) {
	return x*x;
}

ll pangkat(ll a,ll b){
	if (b==0) return 1;
	else if (b==1) return a%MOD;
	else if (b%2==0) return sqr(pangkat(a,b/2)%MOD)%MOD;
	else return ((a%MOD)*(sqr(pangkat(a,(b-1)/2))%MOD))%MOD;
}
int main(){
	OPTIMASI
	cin >> t;
	int tc = 0; 
	while (t--) {
		cin >> n;
		ans = (4*pangkat(5,n-1))%MOD;
		cout << "Case #" << ++tc <<": " << ans << '\n';
	}
	return 0;
} 