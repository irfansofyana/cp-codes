#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,banyak=0,j;
	long long A[i];
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>A[i];
	}
	for (j=1;j<=n-1;j++)
		{
			if (A[j]<A[j+1])
				banyak++;
		}
	printf("%d\n",banyak);
	return 0;
}