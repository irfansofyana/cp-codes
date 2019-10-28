#include <bits/stdc++.h>
using namespace std;
int main()
{
	double peng;
	int tax;
	double pajak;
	
	cin>>peng;
	cout<<fixed<<showpoint<<setprecision(2);
	if (peng<=2000.00)
		cout<<"Isento"<<endl;
	else
		if ((peng>=2000.01) && (peng<=3000.00))
			{
				tax=8;
				pajak=(double(tax)/100)*(peng-2000);
				cout<<"R$ "<<pajak<<endl;
			}
	else
		if ((peng>=3000.01) && (peng<=4500.00))
			{
				pajak=((double(8)/100)*(1000))+((double(18)/100)*(peng-2000-1000));
				cout<<"R$ "<<pajak<<endl;
			}
	else
		{
			pajak=(((double(8)/100)*(1000))+((double(18))/100)*(1500)+((double(28)/100)*(peng-2000-1000-1500)));
		
		}
}