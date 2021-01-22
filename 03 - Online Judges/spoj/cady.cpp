#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXN = (int)1e5 + 5;

int n,i,j;
ll ans;
ll A[MAXN],B[MAXN];

int main(){
	while (scanf("%d", &n)){
		if (n == 0) return 0;
		for (i = 0 ; i < n ; i++) scanf("%lld", &A[i]);
		for (i = 0 ; i < n ; i++) scanf("%lld", &B[i]);
		sort(A,A+n); sort(B,B+n);
		ans = 0;
		for (i = 0 ; i < n ; i++) {
			ans += A[i]*B[n-1-i];
		}
		printf("%lld\n", ans);
	}
}