#include <bits/stdc++.h>

using namespace std;
int n,i,ans,temp;
char xa[1010],xb[1010];

int main(){
	scanf("%d",&n);
	scanf("%s",&xa);
	scanf("%s",&xb);
	
	for (i=0;i<n;i++){
		temp = abs(int(xa[i])-int(xb[i]));
		ans += (temp>5?10-temp:temp);
	}
	printf("%d\n",ans);
	return 0;
}