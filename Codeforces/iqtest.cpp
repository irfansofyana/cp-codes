#include <bits/stdc++.h>
using namespace std;
int main(){
	int genap=0,ganjil=0,i,n,idx;
	int A[101];
	int idx1,idx2;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&A[i]);
		if (A[i]%2==0){
			genap++;
			idx1=i;
		}
		else{ 
			ganjil++;
			idx2=i;
		}
	}
	if (genap==n-1)
		printf("%d\n",idx2);
	else if(ganjil==n-1)
		printf("%d\n",idx1);
	return 0;	
}