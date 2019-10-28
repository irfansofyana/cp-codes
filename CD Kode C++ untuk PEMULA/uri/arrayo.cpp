#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,k;
	int genap[15];
	int ganjil[15];
	int o=0,e=0;
	
	for (i=1;i<=9;i++)
		{
			cin>>n;
			if (n%2==0)
				{
					genap[e]=n;
					e++;
				}
			else
				{
					ganjil[o]=n;
					o++;
				}
		}
	if (e<=5)
		{
			for (i=0;i<=e-1;i++)
				cout<<"par"<<"["<<i<<"]"<<" = "<<genap[i]<<endl;
			for (i=0;i<=o-1;o++)
				{
					if (i>=5)
						{
							k=i;
							i=i-5;
							cout<<"par"<"["<<i<<"]"<<" = "<<ganjil[k]<<endl;
						}
					else
						{
							cout<<"par"<<"["<<i<<"]"<<" = "<<ganjil[i]<<endl;
						}
				}
		}
	return 0;
}