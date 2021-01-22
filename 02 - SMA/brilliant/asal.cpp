#include <bits/stdc++.h>
using namespace std;

long long b,k,idx,temp;
long long i,A[70];

int main(){
	scanf("%lld %lld",&b,&k);
	A[0]=1;
	for (i=1;i<=61;i++) {
		A[i]=2*A[i-1];
	}
	for (i=1;i<=61;i++){
		if (A[i]>=k-b) {
			idx = i-1;
			break;
		}
	}
	temp = k-b;
	while (temp>0) {
		if (A[idx]>temp) idx--;
		else if (A[idx]<=temp) {
			printf("%lld\n",A[idx]);
			temp -= A[idx];
			idx --;
		}
	}
	return 0;
}
