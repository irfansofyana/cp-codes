#include <bits/stdc++.h>
using namespace std;

int n,k,p,x,y,j,i;
int x[1010];
int sum,acuan;

int main(){
	scanf("%d %d %d %d %d",&n,&k,&p,&x,&y);
	for (i=0;i<k;i++) {scanf("%d",&A[i]); sum+=A[i]; }
	if (sum+(n-k)*1>x) printf("-1\n");
	else {
		acuan = x*n-sum;
		sort(A,A+n);
		if (n/2<=k-1) {
			if (A[n/2]>=y) {
				if ((n-k)*A[k-1]>acuan) printf("-1");
				else for (i=0;i<n-k;i++) {if (i==0) printf("%d",A[k-1]); else printf(" %d",A[k-1]);}
				printf("\n");
			}
			else {
				j = (n/2)+1;
				while (A[j]<y && j<k) j++;
				if (j==k)  
			}
		}
	}
}