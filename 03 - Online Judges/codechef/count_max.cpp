#include <bits/stdc++.h>
using namespace std;

int t,n,i,j,maks,ans;
int A[10005];

int main(){
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		memset(A,0,sizeof A);
		for (i=0;i<n;i++) {
			scanf("%d",&j);
			A[j]++;
		}
		maks = -1;
		for (i=1;i<=10000;i++) {
			if (A[i]>maks) {
				maks = A[i];
				ans = i;
			}
		}
		printf("%d %d\n",ans,maks);
	}
}
