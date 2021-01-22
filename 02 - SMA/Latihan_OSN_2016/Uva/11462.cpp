#include <bits/stdc++.h>
using namespace std;

int A[2000005];
int n,i,j;

int main(){
	while (scanf("%d", &n)){
		if (n==0) return 0;
		for (i = 0 ; i < n ; i++)
			scanf("%d", &A[i]);
		sort(A,A+n);
		for (i = 0 ; i < n ; i++){
			printf("%d", A[i]);
			printf(i==n-1 ? "\n" : " ");
		}
	}
	return 0;
}