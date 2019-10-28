#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,banyak=1,max=1,maks=0;
	int A[100001],B[100001];
	int C[100001];
	
	cin>>n;
	for (i=0;i<n;i++)
		{
			cin>>A[i]>>B[i];
		}
	j=1;
	for (i=0;i<n;i++)
		C[i]=0;
	for (i=0;i<=n-2;i++)
		{
			if ((A[i]==A[i+1]) && (B[i]==B[i+1]))
				{
					C[j]++;
				}
			else 
			j++;
		}	
	for (i=0;i<n;i++)
		if (C[i]>maks)
			maks=C[i];
	printf("%d\n",maks);
}