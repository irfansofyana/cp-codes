#include <bits/stdc++.h>

using namespace std;
int main()
{
	int A[3],B[3];
	int i,j,temp,imaks;
	
	cin >>A[0]>>A[1]>>A[2];
	for (i=0;i<=2;i++)
		B[i]=A[i];
	for (i=2;i>=0;i--)
		{
			imaks=0;
			for (j=1;j<=i;j++)
				{
					if (A[j]>A[imaks])
						imaks=j;
				}
			temp=A[i];
			A[i]=A[imaks];
			A[imaks]=temp;
		}
	for (i=0;i<=2;i++)
		cout<<A[i]<<endl;
	cout<<endl;
	for (i=0;i<=2;i++)
		cout<<B[i]<<endl;
	return 0;
}