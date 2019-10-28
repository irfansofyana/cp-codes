#include <bits/stdc++.h>
using namespace std;

int n,A[3],B[3];
int i,j,k;
long long ans;
int main(){
	scanf("%d",&n);
	while (n--) {
		for (i=0;i<3;i++)
			scanf("%d",&A[i]);
		sort(A,A+3);
		ans = 0;
		for (i=1;i<=A[0];i++)
			for (j=i;j<=A[1];j++) 
				for (k=j;k<=A[2];k++){
					B[0]=i; B[1]=j; B[2]=k;
					sort(B,B+3);
					if (B[0]!=B[1] && B[1]!=B[2]) ans+=6;
					else if (B[0]==B[1] && B[1]!=B[2]) ans+=3;
					else if (B[0]!=B[1] && B[1]==B[2]) ans+=3;
					else if (B[0]==B[1] && B[1]==B[2]) ans+=1;
				}
		printf("%lld\n",ans);
	}
	return 0;	
}
