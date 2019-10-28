#include <bits/stdc++.h>

using namespace std;
int main()
{
	double a,b,c;
	double p,l;
	
	cout<<fixed<<showpoint;
	cout<<setprecision(1);
	
	if ((a+b)>c)
		{
			if ((b+c)>a)
				if ((c+a)>b)
					{
						p=a+b+c;
						cout<<"Perimetro = "<<p<<endl;
						
					}
				else
					{
					l=(1.0/2)*(a+b)*c;
					cout<<"Area = "<<l<<endl;
					}
			else
			{
				l=(1.0/2)*(a+b)*c;
				cout<<"Area = "<<l<<endl;
			}
		}
	else
	{
		l=(1.0/2)*(a+b)*c;
		cout<<"Area = "<<l<<endl;
	}
	return 0;
}