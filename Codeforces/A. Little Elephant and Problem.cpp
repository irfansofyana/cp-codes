#include <bits/stdc++.h>
using namespace std;

int n,i,j,beda;
long long A[100010],B[100010];

int main(){
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%I64d",&A[i]);
		B[i]=A[i];
	}
	sort(B,B+n);
	for (i=0;i<n;i++){
		if (A[i]!=B[i]) beda++;
	}
	if (beda>2) puts("NO");
	else puts("YES");
}
