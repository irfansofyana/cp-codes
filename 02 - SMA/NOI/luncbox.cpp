#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll arr[60005];

int main(){
	scanf("%lld %lld", &n, &m);
	for (i = 0 ; i < m ; i++) {
		scanf("%lld", &arr[i]);
	}
	sort(arr, arr + m);
	ll tot = 0;
	for (i = 0 ; i < m ; i++) {
		tot += arr[i];
		if (tot > n) break;
	}
	printf("%d\n", i);
	return 0;
}