#include <bits/stdc++.h>
using namespace std;

int t,n,i,m,j,ans;
int A[3700],hari[3700];

int main(){
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		scanf("%d",&m);
		memset(hari,0,sizeof(hari));
		ans=0;
		for (i=0;i<m;i++){
			scanf("%d",&A[i]);
			for (j=1;j<=n;j++){
				if (j%A[i]==0 && (j%7!=6 && j%7!=0) && hari[j]==0) hari[j]=1;
			}
		}
		for (i=1;i<=n;i++) {
			if (hari[i]==1) ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
