#include <bits/stdc++.h>
using namespace std;

int n,i,j,target,sum;
int A[50];
bool ada;

int main(){
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++)
		scanf("%d", &A[i]);
	scanf("%d",&target); ada = false;
	for (i = 0 ; i < (1<<(n-1)) ; i++) {
		sum = 0;
		for (j = 0 ; j < (n-1) ; j++) {
			if (j==0) {
				if (i&(1<<j)) {
					sum += A[j]+A[j+1];
				}
				else sum += A[j]-A[j+1];
			}
			else {
				if (i&(1<<j)) sum += A[j+1];
				else sum -= A[j+1];
			}
		}
		if (sum==target) {
			ada = true;
			break;
		}
	}
	if (ada) puts("ada");
	else puts("tidak ada");
	return 0;
}