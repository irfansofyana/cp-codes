#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,jum1=0,jum2=0,jum3=0;
	int A[101][101];
	
	cin>>n;
	for (i=0;i<n;i++)
		{
			for (j=0;j<3;j++)
				{
					cin>>A[i][j];
						if (j==0)
							jum1=jum1+A[i][j];
						else if (j==1)
							jum2=jum2+A[i][j];
						else if (j==2)
							jum3=jum3+A[i][j];
				}
		}
	if (((jum1==0) && (jum2==0)) && (jum3==0))
		printf("YES\n");
	else	
		printf("NO\n");
}