#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
int A[100005];

int main(){
	scanf("%d", &n);
	for (i=1;i<=n;i++) {
		scanf("%d", &A[i]);
		A[i]+=A[i-1];
	}
	for (i=1;i<=n-1;i++) {
		if (A[i]==A[n]-A[i]) ans++;
	}
	printf("%d\n", ans);
	return 0;
} 
