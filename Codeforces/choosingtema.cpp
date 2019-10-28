#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,banyak=0;
	int A[2001];
	
	scanf("%d %d",&n,&k);
	for (i=1;i<=n;i++){	
		cin>>A[i];
		A[i]=A[i]+k;
		if (A[i]<=5)
			banyak++;
	}
	banyak=(banyak/3);
	printf("%d",banyak);
	return 0;
}