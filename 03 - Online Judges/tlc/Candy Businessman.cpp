#include <bits/stdc++.h>
using namespace std;
int n,i;
int A[1000];

int main(){
	int t,idx=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for (i=0;i<n;i++) scanf("%d",&A[i]);
		sort(A,A+n);
		printf("Case #%d: %d\n",idx,A[n-1]-A[0]);
		idx++;
	}
	return 0;
}
