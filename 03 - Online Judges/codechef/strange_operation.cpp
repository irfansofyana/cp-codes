/*
	CODECHEF PROBLEM : STRANGE OPERATION
	AUTHOR : IRFAN SOFYANA PUTRA (cokguzel48)
*/

#include <bits/stdc++.h>
using namespace std;

long long n,i,t,k;
long long sum,temp;

int main(){
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d",&n,&k);
		sum = 0;
		for (i=0;i<n;i++) {
			scanf("%d",&temp);
			sum += temp;
		}
		if (k==1 && sum%2==0) puts("odd");
		else puts("even");
	}
}
