#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i;
	long jumlah=0;
	
	cin>>a;
	cin>>b;
	if (a<=b)
		for (i=a;i<=b;i++)
		{
			if (i%13!=0)
				jumlah=jumlah+i;
		}
	else
	{
		for (i=b;i<=a;i++)
			if (i%13!=0)
				jumlah=jumlah+i;
	}
	cout<<jumlah<<endl;
}