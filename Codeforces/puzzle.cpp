#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n,m,i,min,k,j;
	int A[1000];
	
	cin>>n>>m;
	for (i=0;i<m;i++)
		cin>>A[i];
	sort(A,A+m);
	for (i=m;i>=1;i--)
		{
			for (j=i-1;j>=0;j--)
				{
					if ((i==0) && (j==1))
						min=A[i]-A[j];
					else
						{
							k=A[i]-A[j];
							if ((k<min) && (k>0))
								min=k;
						}
				}
		}
	cout<<min<<endl;

}