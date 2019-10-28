#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int banyak=0,min,temp,j,i;
	int A[1000];
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	for (i=0;i<=n-2;i++)
		{
			min=i;
			for (j=i+1;j<=n-1;j++)
				if (A[j]<A[min]){
					min=j;
					banyak++;
				}
			temp=A[i];
			A[i]=A[min];
			A[min]=temp;
		}
	printf("%d\n",banyak);
	return 0;
}