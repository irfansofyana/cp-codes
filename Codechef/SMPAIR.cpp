#include <bits/stdc++.h>
using namespace std;

int TC,n,i,j;
int A[100005];

int main(){
	scanf("%d", &TC);
	while (TC--) {
		scanf("%d", &n);
		for (i = 0 ; i < n ; i++) {
			scanf("%d", &A[i]);
		}
		sort(A,A+n);
		printf("%d\n", A[0]+A[1]);
	}
	return 0;
}