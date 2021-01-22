#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,it;
ll sum;
char ans[105];

int main(){
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &n);
		sum = 0;
		if (n <= 2) {
			if (n == 1) printf("5\n");
			else printf("6\n");
		}
		else {
			sum = 2;
			it = 4;
			while (sum + it < n) {
				sum += it;
				it <<= 1;
			}
			n -= sum;
			it >>= 1;
			int idx = 0;
			while (it > 0) {
				if (n <= it) ans[idx++] = '5';
				else if (n > it) {
					ans[idx++] = '6';
					n = (n%it == 0 ? it : n%it);
				}
				it >>= 1;
			}
			for (int i = 0 ; i < idx; i++) {
				(i == idx-1 ? printf("%c\n", ans[i]) : printf("%c", ans[i]));
			}
		}
	}
	return 0;
}