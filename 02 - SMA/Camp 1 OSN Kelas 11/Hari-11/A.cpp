#include <bits/stdc++.h>
using namespace std;

long long n,m,i,j,ans;
long long lo,hi,mid;
long long A[1000005];

long long f(long long k){
	long long res = 0;
	for (i = 0 ; i < n ; i++) {
		if (A[i]>k) res+=A[i]-k;
	}
	return res;
}

int main(){
	scanf("%lld %lld", &n , &m);
	for (i = 0 ; i < n ; i++)
		scanf("%lld", &A[i]);
	sort(A,A+n);
	lo = 0; hi = 1000000000;
	while (lo<=hi) {
		mid = (lo+hi)/2;
		if (f(mid)>=m) {
			ans = mid;
			lo = mid+1;
		}
		else hi = mid-1;
	}
	printf("%lld\n", ans);
	return 0;
}