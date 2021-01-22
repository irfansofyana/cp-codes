#include <bits/stdc++.h>
using namespace std;

int n,i,x,y,m,pos,neg;
int A[200005];

int main(){
	scanf("%d %d",&n,&m);
	for (i=1;i<=n;i++){
		scanf("%d",&A[i]);
		if (A[i]==1) pos++;
		else neg++;
	}
	for (i=1;i<=m;i++) {
		scanf("%d %d",&x,&y);
		if ((y-x+1)%2==1) puts("0");
		else if (((y-x+1)/2)<=min(pos,neg)) puts("1");
		else puts("0");
	}
	return 0;
}
