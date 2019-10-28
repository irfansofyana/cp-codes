#include <bits/stdc++.h>
using namespace std;

int t,n,i,j,m;
int A[110],B[110];
int tc,ans;

int main() {
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d",&n,&m);
		for (i=0;i<n;i++) 
			scanf("%d",&A[i]);
		for (i=0;i<m;i++) 
			scanf("%d",&B[i]);
		for (i=0;i<n;i++) {
			for (j=0;j<m;j++) {
				if (i==0 && j==0) ans = abs(A[i]-B[j]);
				else if (abs(A[i]-B[j])<ans) ans = abs(A[i]-B[j]);
			}
		}
		printf("Kasus #%d: %d\n",++tc,ans);
	}	
	return 0;
}
