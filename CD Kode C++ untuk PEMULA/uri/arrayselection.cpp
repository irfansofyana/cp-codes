#include <bits/stdc++.h>
using namespace std;
int main(){
	double A[100];
	int i,j;
	
	for (i=0;i<=4;i++){
		scanf("%lf",&A[i]);
	}
	for (i=0;i<=4;i++){
		if(A[i]<=10)
			printf("A[%d] = %.1lfs\n",i,A[i]);
	}
	return 0;
}