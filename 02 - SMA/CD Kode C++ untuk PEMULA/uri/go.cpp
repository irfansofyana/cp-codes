#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,j;
	int A[1000];
	double rata;
	
	i=1;
	int jumlah=0;
	while (cin)
	{
		getline(cin,s);
		cin>>A[i];
		jumlah=jumlah+A[i];
		i++;
	}
	cout<<jumlah<<endl;
	rata=(double(jumlah)/(i-1));
	cout<<fixed<<showpoint;
	cout<<setprecision(1);
	cout<<rata<<endl;
	return 0;
}