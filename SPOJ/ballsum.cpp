#include <bits/stdc++.h>
//#define OPTIMATION
using namespace std;

typedef long long ll;

ll n,k;
ll nume,deno,limit;

inline ll gcd(ll a,ll b){
	return (b == 0 ? a : gcd(b,a%b));
}

int main(){
	#ifdef OPTIMATION
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	while (scanf("%lld %lld", &n, &k)){
		if (n == -1 && k == -1) return 0;
		if (k <= 2 || k > ((n << 1)) -1) printf("0\n");
		else if (k == ((n << 1)) -1) printf("1\n");
		else {
			deno = ((n*(n-1)) >> 1);
			if (k%2 == 0) limit = (k >> 1) - 1;
			else limit = (k >> 1);
			nume = k*limit-(limit*(limit+1));
			ll fpb = gcd(nume,deno);
			cout << nume/fpb << "/" << deno/fpb << '\n';
		}
	}
	return 0;
}