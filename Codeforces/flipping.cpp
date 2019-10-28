#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,max=0,banyak,k;
	
	cin>>n;
	int A[n];
	for (i=0;i<n;i++)
		cin>>A[i];
	for (i=0;i<n;i++)
		{
			for (j=i;j<n;j++)
				{
					banyak=0;
					for (k=0;k<n;k++)
						{
							if ((k>=i) && (k<=j))
								{
									if (A[k]==0){
										banyak++;
									}
								}
							else 
								{
									if (A[k]==1)
										banyak++;
								}
								
						}
					if (banyak>max)
						max=banyak;
				}
		}
	printf("%d\n",max);
}