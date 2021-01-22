#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll arr[1005],brr[1005];

int main(){
	scanf("%I64d", &n);
	for (i = 0 ; i < n ; i++)
		scanf("%I64d", &arr[i]);
	for (i = 0 ; i < n ; i++)
		scanf("%I64d", &brr[i]);
	ll ans = 0;
	for (i = 0 ; i < n ; i++) {
		ans |= arr[i];
	}
	ll res = 0;
	for (i = 0 ; i < n ; i++)
		res |= brr[i];
	printf("%I64d\n", ans+res);
	return 0;
}