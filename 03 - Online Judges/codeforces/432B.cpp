/*
	CODEFORCES PROBLEM : FOOTBALL KIT (432 B)
	AUTHOR : IRFAN SOFYANA PUTRA (cokguzel48) 
*/

#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int home[100005],away[100005];
int x,y;

int main(){
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		scanf("%d %d",&x,&y);
		home[x]++;
		away[i] = y;
	}
	for (i=1;i<=n;i++) {
		printf("%d %d\n",n-1+home[away[i]],n-1-(home[away[i]]));
	}
	return 0;
}
