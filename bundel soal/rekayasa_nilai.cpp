#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[110],jum;
bool ans;

int main(){
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		memset(A,0,sizeof A);
		jum = 0;
		ans = true;
		for (i=0;i<n;i++){
			scanf("%d",&A[i]);
			if (A[i]>=n) ans = false;
			jum += A[i];
		}
		if (jum>(n*(n-1))/2 || !ans) puts("tidak mungkin");
		else puts("mungkin");
	}
}
