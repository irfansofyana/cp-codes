#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,maks,ix;
	int A[101];
	
	maks=0;
	for (i=1;i<=100;i++)
	{
		cin>>A[i];
			if (A[i]>maks)
				{
					maks=A[i];
					ix=i;
				}
	}
	cout<<maks<<endl;
	cout<<ix<<endl;
	return 0;
}