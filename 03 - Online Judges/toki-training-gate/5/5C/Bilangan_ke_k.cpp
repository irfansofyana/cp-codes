#include <bits/stdc++.h>
using namespace std;

long long n,k,i;
long long A[100005];

bool comp(long long a,long long b){
	return a>b;
}
int main(){
	scanf("%lld %lld",&n,&k);
	for (i=0;i<n;i++)
		scanf("%lld",&A[i]);
	sort(A,A+n,comp);
	printf("%lld\n",A[k-1]);
	return 0;
}
