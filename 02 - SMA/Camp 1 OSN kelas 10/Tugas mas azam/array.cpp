#include <bits/stdc++.h>
using namespace std;
int main(){

	int A[100][100];
	int b,c,d,e,n,i,j,x,start;
	int keisi=0;
	bool p=false; 
	
	cin>>n;
	x=1;
	b=0;
	c=0;
	d=n-1;
	e=n-1;
	if (n%2==0)
	{
			start=0;
			while (keisi!=n*n)
				{
					A[b][c]=x;
					x++;
					keisi++;
					A[c][d]=x;
					x++;
					keisi++;
					A[d][e]=x;
					x++;
					keisi++;
					A[e][b]=x;
					x++;
					keisi++;
					c++;
					e=e-1;
					if (e==start)
						{
							b++;
							c=n-c;
							d=d-1;
							e=n-2-e;
							start++;
						}
				}
	}
	if (n%2==1)
		{
				start=0;
			while (keisi!=n*n-1)
				{
					A[b][c]=x;
					x++;
					keisi++;
					A[c][d]=x;
					x++;
					keisi++;
					A[d][e]=x;
					x++;
					keisi++;
					A[e][b]=x;
					x++;
					keisi++;
					c++;
					e=e-1;
					if (e==start)
						{
							b++;
							c=n-c;
							d=d-1;
							e=n-2-e;
							start++;
						}
				}
			A[n/2][n/2]=n*n;
		}
	for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				{
					if (j!=n-1)
						cout<<A[i][j]<<" ";
					else if (j==n-1)
						cout<<A[i][j]<<endl;
				}
		}
		
}