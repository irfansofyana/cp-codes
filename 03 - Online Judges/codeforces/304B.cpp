#include <bits/stdc++.h>
using namespace std;

int n,i,ans;
int A[3010];
int j;

int main(){
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&A[i]);
	sort(A,A+n);
	j = 1;
	for (i=0;i<n;i++){
		if (A[i]!=j) 
			ans+=abs(A[i]-j);
		j++;
	}
	printf("%d\n",ans);
	return 0;
}
