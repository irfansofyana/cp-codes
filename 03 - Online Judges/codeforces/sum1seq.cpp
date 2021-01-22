#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll n,k,i,j;
ll arr[100005];
 
int main(){
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld %lld", &n, &k);
		ll tmp = (n*(n-1))/2;
		for (i = 1 ; i <= n ; i++) arr[i] = 1;
		arr[1] = 0;
		if (abs(tmp-k)%2==1 || k > tmp) printf("No\n");
		else {
			ll p = (tmp-k)/2;
			for (i = n-1 ; i >= 1 && p > 0 ; i--) {
				if (p >= i) {
					p -= i;
					arr[n+1-i] = -1;
				}
			}
			for (i = 2; i <= n ; i++) 
				arr[i] += arr[i-1];
			for (i = 1 ; i <= n ; i++) {
				printf("%lld\n", arr[i]);
			}
		} 
		if (t != 0) printf("\n");
	}
	return 0;
} 