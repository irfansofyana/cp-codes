#include <bits/stdc++.h>

using namespace std;
int main()
{

	int i,j,jumlah,p;
	int m[1000],n[1000];
	
	i=1;
	cin>>m[i]>>n[i];
	while ((m[i]>0)&&(n[i]>0))
	{
		i=i+1;
		cin>>m[i]>>n[i];
	}
	
	for (j=1;j<=i-1;j++)
		{
			jumlah=0;
			if (m[j]<=n[j])
				for (p=m[j];p<=n[j];p++)
				{
					cout<<p<<" ";
					jumlah=jumlah+p;
				}
			else
				for (p=n[j];p<=m[j];p++)
				{
					cout<<p<<" ";
					jumlah=jumlah+p;
				}
			cout<<"Sum="<<jumlah<<endl;
		}
	return 0;
}	