#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,i;
	int jumlah=0;
	double rata;
	
	i=0;
	
	cin>>n;
		while (n!=9999)
		{
			i=i+1;
			jumlah=jumlah+n;
			cin>>n;
		}
		if (i==0) 
			cout<<0<<endl;
		else
		{
		rata=double(jumlah)/i;
		cout<<fixed<<showpoint;
		cout<<setprecision(2);
		cout<<rata<<endl;
		}
	return 0;
}