#include <bits/stdc++.h>
using namespace std;

int d,n,i,j;
int A[2005];
int ans,curr;

int main(){
	scanf("%d", &d);
	scanf("%d", &n);
	for (i=1;i<=n;i++)
		scanf("%d", &A[i]);
	curr = A[1]+1;
	if (curr>d) curr = 1;
	for (i=2;i<=n;i++) {
		if (curr!=1) ans += d+1-curr;
		curr = A[i]+1;
		if (curr>d) curr = 1;
	}
	printf("%d\n", ans);
}
