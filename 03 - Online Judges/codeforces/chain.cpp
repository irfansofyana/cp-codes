#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j;
	int A[100],B[100];
	int maks=0,banyak=0;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	cin>>m;
	for (j=0;j<m;j++)
		cin>>B[j];
	
	for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
				{
					if (B[j]%A[i]==0)
						{
							if ((B[j]/A[i])>maks)
								{
									maks=B[j]/A[i];
									banyak=1;
								}
							else if ((B[j]/A[i])==maks)
								{
									banyak++;
								}
							
						}
				}
		}
	cout<<banyak<<endl;
}