#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,r,k,x;
	bool A[2002];
	int banyak=0;
	
	memset(A,0,sizeof(A));
	cin>>n>>m>>r;
	for (i=0;i<r;i++){
		cin>>x;
		A[x]=1;
	}
	for (i=1;i<=max(n,m);i++)
		{
			if ((A[2*i-1]==1) && (A[2*i]==1))
				{
					banyak=banyak+1;
				}
			else
				{
					if ((A[2*i-1]==1) || (A[2*i]==1))
						{
							if ((A[2*i+1]==1) && (A[2*i+2]==1))
								{
								A[2*i+1]==0;
								banyak++;
								}
							else
								{
								if ((A[2*i+1]==1)){
									A[2*i+1]=0;
									banyak++;
								}		
					else if ((A[2*i+2]==1)){
						A[2*i+2]=0;
						banyak++;
					}
					else
						banyak++;
				}
						}
				
				}
		}
		cout<<banyak<<endl;
}
