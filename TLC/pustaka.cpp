#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,banyak=0;
	int A[1000];
	int temp,min,j;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	
	for (i=0;i<=n-2;i++)
		{
			min=i;
			for (j=i+1;j<=n-1;j++)
				{
					if (A[j]<A[min])
						min=j;
				}
			if (min!=i)
				{
					banyak++;
					temp=A[i];
					A[i]=A[min];
					A[min]=temp;
				}
		}
	cout<<banyak<<endl;
	return 0;
}