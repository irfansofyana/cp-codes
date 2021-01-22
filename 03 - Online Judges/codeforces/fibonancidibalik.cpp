#include <bits/stdc++.h>
using namespace std;

int n,i,j,x,y;
int A[10000];

int main(){
	scanf("%d %d %d",&n,&x,&y);
	A[n+1]=y;
	A[n]=x;
	for (i=n-1;i>=1;si--){
		A[i]=A[i+2]-A[i+1];
	}
	printf("%d\n",A[1]);
	return 0;
}
