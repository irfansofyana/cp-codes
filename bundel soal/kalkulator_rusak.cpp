#include <bits/stdc++.h>
using namespace std;

long long t,n,m,i,j;
bool A[20];
long long ans;

int main(){
	scanf("%lld",&t);
	while (t--) {
		scanf("%lld %lld",&n,&m);
		memset(A,false,sizeof A);
		ans = 0;
		for (i=0;i<n;i++) {
			long long zz;
			scanf("%lld",&zz);
			A[zz] = true; 
		}
		for (i=1;i<=m;i++) {
			if (i==1) ans+=n;
			else {
				long long temp=(A[0]==true?n-1:n);
				for (j=1;j<=i-1;j++) 
					temp*=n;
				ans+=temp;
			}
		}
		printf("%lld\n",ans);
	}
}
