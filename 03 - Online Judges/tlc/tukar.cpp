#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,banyak=0;
	int A[1000],j;
	int min;
	int temp;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
	}
	for (i=0;i<=n-2;i++)
		{
			for (j=n-1;j>=i+1;j--)
				{
					if (A[j]<A[j-1])
						{
							banyak++;
							temp=A[j-1];
							A[j-1]=A[j];
							A[j]=temp;
						}
				}
		}
	printf("%d\n",banyak);
	return 0;
}