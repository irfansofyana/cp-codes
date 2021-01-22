#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,banyak=0;
	int A[31],B[31];
	
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>A[i]>>B[i];
	
	for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			{
				if (i!=j)
					{
						if (A[i]==B[j])
							banyak++;
					}
			}
		}
	printf("%d\n",banyak);
	return 0;
}
