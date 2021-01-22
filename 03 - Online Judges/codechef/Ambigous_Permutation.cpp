#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[100005];
int B[100005];
int temp;

int main(){
	while (scanf("%d",&n) && n!=0) {
		for (i=1;i<=n;i++) {
			scanf("%d",&B[i]);
			A[B[i]] = i;
		}
		j = 0;
		for (i=1;i<=n;i++) {
			if (A[i]==B[i]) j++;
		}
		if (j==n) puts("ambiguous");
		else puts("not ambiguous");
	}
}
