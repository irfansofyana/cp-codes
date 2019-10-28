#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL a, b, p, x;

LL power(LL a, LL b){
	if (b == 0) return 1;
	else if (b == 1) return a%p;
	LL tmp = power(a, b>>1);
	tmp = (tmp * tmp) % p;
	if (b % 2 == 0) return tmp;
	else return ((a%p) * tmp)%p;
}

LL inv(LL a){
	return power(a, p-2);
}

LL compute(LL left, LL right, LL k){
	if (k > right) return 0;
	else {
		LL t1 = max(0LL, (left-k)/p);
		LL t2 = (right - k)/p;
		if (t1 > t2) return 0;
		else return t2-t1+1;
	}
}

int main(){
	// ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// cin >> a >> b >> p >> x;
	scanf("%I64d %I64d %I64d %I64d", &a, &b, &p, &x);
	LL ans = 0;
	for (LL i = 0; i < p-1 && i <= x; i++){
		LL n = (b * inv(power(a, i)))%p;
		LL k = (i-n + p)%p;

		LL left, right;
		if (i == 0) left = 1;
		else left = 0;
		right = (x - i) / (p - 1);
		ans += compute(left, right, k);
		// cout << i << " n = " << n << " k = " << k << '\n';
	}
	printf("%I64d\n", ans);
	return 0;
}