#include <bits/stdc++.h>
using namespace std;

int t, tc;
long long n;

int main(){
	scanf("%d", &t);
	while (t--){
		scanf("%lld", &n);
		long long bil = (n*n) / 2;
		long long tmp = (long long)sqrt(bil);
		while (tmp * tmp <= bil) tmp++;
		if (tmp > n-1) tmp = -1;
		printf("Kasus #%d: %lld\n", ++tc, tmp);
	}
	return 0;
}