#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,k,j,jumlah=0,min,temp,banyak=0;
	int A[13];
	
	cin>>k;
	for (i=0;i<=11;i++)
		cin>>A[i];
		
	for (i=0;i<=10;i++)
		{
			min=i;
			for (j=i+1;j<=11;j++)
				if (A[j]<A[min])
					min=j;
			temp=A[i];
			A[i]=A[min];
			A[min]=temp;
		}
	i=11;
	while ((i>=0) && (jumlah<k))
		{
			banyak++;
			jumlah=jumlah+A[i];
			i=i-1;
		}
	if (i==-1)
		{
			if (jumlah>=k)
				printf("%d\n",banyak);
			else
				printf("-1\n");
		}
	else
		printf("%d\n",banyak);
}