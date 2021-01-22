#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000000;

int n,i,j;
int A[MAXN+5];

int main() {
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++) {
		scanf("%d", &A[i]);
	}
	sort(A,A+n);
	if (A[0]==1) puts("-1");
	else puts("1");
	return 0;
}
