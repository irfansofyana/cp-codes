#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,q,j;
	int banyak0=0,banyak5=0;
	int jumlah=0;
	string p="";
	
	cin>>n;
	for (i=1;i<=n;i++){
		int x;
		cin>>x;
		if (x==5){
			banyak5++;
			jumlah+=5;
		}
		else if (x==0)
			banyak0++;
	}
	if (((jumlah%9)==0) && (banyak0>0))
		{
			for (i=1;i<=banyak5;i++)
				p=p+'5';
			if (jumlah==0)
				banyak0=1;
			for (j=1;j<=banyak0;j++)
				p=p+'0';
			cout<<p<<endl;
		}
	else if ((jumlah%9!=0) && (banyak0>0))		
		{
			banyak5=banyak5-(banyak5%9);
			for (i=1;i<=banyak5;i++)
				p=p+'5';
			if (banyak5==0)
			banyak0=1;
			for (j=1;j<=banyak0;j++)
				p=p+'0';
			cout<<p<<endl;
			
		}
	else	
		{
			q=-1;
			cout<<q<<endl;
		}
	return 0;
}