#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int MAXN = 2e5;
const LL MOD = 998244353;

int n;
LL A[MAXN+5], B[MAXN+5], C[MAXN+5];

int main(){
	scanf("%d", &n);
	for (int i = 0 ; i < n; i++)
		scanf("%lld", &A[i]);
	for (int i = 0 ; i < n; i++)
		scanf("%lld", &B[i]);
	sort(B, B + n);
	for (int i = 0; i < n; i++){
		C[i] = 1LL*(i+1) * (n-i) * A[i];
	}
	sort(C, C+n);
	LL ans = 0;
	for (int i = 0; i < n; i++){
		ans = ((ans%MOD) + ((C[i] % MOD) * (B[n-1-i]%MOD))%MOD)%MOD;
	}
	printf("%lld\n", ans);
	return 0;
}