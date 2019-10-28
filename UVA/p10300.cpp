#include <bits/stdc++.h>
using namespace std;
int t,n,a,b,c,ans;

int main(){
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		ans=0;
		for (int it=1;it<=n;it++){
			scanf("%d %d %d",&a,&b,&c);
			ans+=a*c;
		}
		printf("%d\n",ans);
	}
	return 0;
}
