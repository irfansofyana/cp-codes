#include <bits/stdc++.h>
using namespace std;
int idx,n,i,j;
int A[10000];
int main(){
	idx=1;
	while (scanf("%d",&n) && n!=0){
		int sum=0;
		for (i=0;i<n;i++){
			scanf("%d",&A[i]); sum+=A[i];
		} int ans=0;
		for (i=0;i<n;i++){
			if (A[i]>(sum/n)) {
				ans+=A[i]-(sum/n);
			}
		}
		printf("Set #%d\n",idx);
		idx++;
		printf("The minimum number of moves is %d.\n",ans);
		printf("\n");
	}
	return 0;
}
