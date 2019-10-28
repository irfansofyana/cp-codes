#include <bits/stdc++.h>
using namespace std;
int n,i,j,x;
int A[110],sum;
int main(){
	scanf("%d",&n);
	while (n--){
		scanf("%d",&x);
		A[x]++;
	}
	for (i=1;i<=100;i++){
		if (A[i]>=2) {
			if (A[i]%2==0) sum+=A[i];
			else sum+=A[i]-1;
		} 
	}
	printf("%d\n",sum/4);
	return 0;
}
