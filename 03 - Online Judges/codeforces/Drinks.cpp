#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,jumlah=0;
	int A[101];
	double persen;
	
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>A[i];
		jumlah=jumlah+A[i];
	}
	cout<<fixed<<showpoint;
	cout<<setprecision(12);
	persen=(double(jumlah)/(100*n))*100;
	cout<<persen<<endl;
	return 0;
}