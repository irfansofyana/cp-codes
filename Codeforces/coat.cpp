#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,d,m,i;
	int jumlah[2000];
	int x,j,banyak;
	
	jumlah[0]=0;
	cin>>n>>d;
	for (i=1;i<=n;i++){
		cin>>x;
		jumlah[i]=jumlah[i-1]+x;
	}
	cin>>m;
	if (n>m)
		cout<<jumlah[m]<<endl;
	else if (n==m)
		cout<<jumlah[n]<<endl;
	else if (m>n)
		{
			banyak=jumlah[n]-((m-n)*d);
			cout<<banyak<<endl;
		}
}