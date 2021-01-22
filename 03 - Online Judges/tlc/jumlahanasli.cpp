#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,b;
	long long A[100000];
	
	scanf("%lld",&n);
	for (long long i=0;i<n;i++){
		scanf("%lld",&b);
		A[i]=(b*(b+1)/2);
	}
	for (long long i=0;i<n;i++)
		printf("%lld\n",A[i]);
}
