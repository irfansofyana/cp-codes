#include <bits/stdc++.h>
using namespace std;

int na,nb,i,j;
int m,k;
int A[100005],B[100005];

int main(){
	scanf("%d %d", &na ,&nb);
	scanf("%d %d", &k, &m);
	for (i = 0 ; i < na ; i++)
		scanf("%d", &A[i]);
	for (i = 0 ; i < nb ; i++) 
		scanf("%d", &B[i]);
	sort(A,A+na); sort(B,B+nb);
	for (i = 0 ; i < k ; i++) {
		if (A[i]<B[nb-m]) continue;
		else {
			puts("NO");
			return 0;
		}
	}
	puts("YES");
	return 0;
}