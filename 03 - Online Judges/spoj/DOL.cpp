#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
int tc;

int main(){
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &n);
		while (n%2 == 0) n >>= 1;
		printf("Case %d: %lld\n", ++tc, n);
	}
	return 0;
}
