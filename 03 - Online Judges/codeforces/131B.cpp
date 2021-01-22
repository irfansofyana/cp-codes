#include <bits/stdc++.h>
using namespace std;

long long t,n,i,j,x;
long long A[25];
long long ans;

int main(){
	scanf("%I64d",&n);
	for (i=0;i<n;i++) {
		scanf("%I64d",&x);
		A[x+10]++;
	}
	i = 0; j = 20;
	while (i!=j) {
		ans+=A[i]*A[j];
		i++; j--;
	}
	ans+=((A[10]*(A[10]-1))/2);
	printf("%I64d\n",ans);
	return 0;
}
