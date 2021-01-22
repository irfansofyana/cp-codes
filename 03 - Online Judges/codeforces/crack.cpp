#include <bits/stdc++.h>
using namespace std;
int main(){

	int jumlah[1000],A[1000];
	int i,j,n,d;
	int m;
	
	cin>>n>>d;
	for (i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	cin>>m;
	jumlah[0]=0;
	for (i=0;i<n;i++)
		{
			jumlah[i+1]=jumlah[i]+A[i];
		}
	if (m<=n)
		cout<<jumlah[m]<<endl;
	else if (m>n)
		cout<<jumlah[n]-(m-n)*d;
	return 0;
}