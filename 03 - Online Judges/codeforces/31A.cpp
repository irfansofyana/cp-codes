#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[2010],x[1010];
bool ans=false;
int main(){
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		scanf("%d",&x[i]);
		A[x[i]]=i+1;
	}
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (A[x[i]+x[j]]>0){
				printf("%d",A[x[i]+x[j]]);
				if (x[i]>x[j]){
					printf(" %d %d\n",i+1,j+1);
				} 
				else if (x[i]<x[j]) printf(" %d %d\n",j+1,i+1);
				else printf(" %d %d\n",i+1,j+1);
				ans=true;
				break;
			}
		}
		if (ans) break;
	}
	if (!ans) printf("-1\n");
	return 0;
}
