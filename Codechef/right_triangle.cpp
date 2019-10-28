#include <bits/stdc++.h>
using namespace std;

int n,i,ans,t;
int A[7];
int B[3];

int sqr(int k){
	return k*k;
}

int main(){
	scanf("%d",&t);
	while (t--) {
		for (i=0;i<6;i++)
			scanf("%d",&A[i]);
		B[0] = sqr(A[0]-A[4])+sqr(A[1]-A[5]);
		B[1] = sqr(A[0]-A[2])+sqr(A[1]-A[3]);
		B[2] = sqr(A[2]-A[4])+sqr(A[3]-A[5]);
		sort(B,B+3);
		if (B[2]==B[1]+B[0]) ans++;
	}
	printf("%d\n",ans);
}
