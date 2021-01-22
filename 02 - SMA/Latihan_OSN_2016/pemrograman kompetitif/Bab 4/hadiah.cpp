#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c,n;
ll f[300005];
ll i;

ll sqr(ll x){
	return x*x;
}

ll pangkat(ll a,ll b){
	if (b==0) return 1;
	else if (b==1) return a%n;
	else if (b%2==0) return sqr(pangkat(a,b/2)%n)%n;
	else if (b%2==1) return ((a%n)*(sqr(pangkat(a,(b-1)/2)%n)%n))%n;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b >> c >> n;
	f[0] = a%n;
	for (i = 1 ; i <= c ; i++) {
		f[i] = pangkat(f[i-1],b);
	}
	cout << f[c]+1 << '\n';
	return 0;
}