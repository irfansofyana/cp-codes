#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,k;

int main(){
	scanf("%d %d", &n, &k);
	int ans = 0;
	for (int i = 1 ; i <= n; i++) {
		ans += 5 * i;
		if (ans + k > 240) {
			printf("%d\n", i-1);
			return 0;
		}
	}
	printf("%d\n", n);
	return 0;
}