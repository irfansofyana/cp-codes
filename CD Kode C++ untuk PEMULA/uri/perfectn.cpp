#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,jum=0;
	int x,k,i,j;
	int A[100],B[100];
	
	cin>>n;
		for (i=1;i<=n;i++)
			{
				jum=0;
				cin>>x;
				B[i]=x;
					for (j=1;j<=static_cast<int>(sqrt(B[i]));j++)
						{
							if (x%j==0)
							{
								k=x/j;
									if (k!=j)
										jum=jum+j+k;
									else
										jum=jum+j;
							}
						}
					if ((jum-x)==x)
						A[i]=1;
					else
						A[i]=2;
			}
		for (i=1;i<=n;i++)
			{
				if (A[i]==1)
					cout<<B[i]<<" eh perfeito"<<endl;
				else
					cout<<B[i]<<" nao eh perfeito"<<endl;
			}
	return 0;
}