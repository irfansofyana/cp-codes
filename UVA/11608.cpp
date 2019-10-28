#include <bits/stdc++.h>
using namespace std;

int A[12],B[12];
int sedia,n,i,j,tc;
bool jawaban[12];

int main(){
	while (scanf("%d",&n)){
		if (n < 0) return 0;
		sedia = n;
		memset(jawaban,false,sizeof(jawaban));
		for (i=0;i<12;i++) scanf("%d",&A[i]);
		for (i=0;i<12;i++) scanf("%d",&B[i]);
		printf("Case %d:\n", ++tc);
		for (i = 0 ; i < 12; i++) {
			if (sedia >= B[i]) {
				sedia -= B[i];
				printf("No problem! :D\n");
			}
			else {
				//sedia = 0;
				printf("No problem. :(\n");
			}
			sedia += A[i];
		}
	}
	return 0;
}
