#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,k;
	int j;
	
	cin>>n;
	for (i=1;i<=(n/2);i++)
		{
			for (j=1;j<=i-1;j++)
				cout<<" ";
			cout<<"\\";
			for (j=1;j<=(n-2*i);j++)
				cout<<" ";
			cout<<"/"<<endl;
		}
	for (i=1;i<=(n/2);i++)
		cout<<" ";
	cout<<"X"<<endl;
	k=1;
	for (i=1;i<=(n/2);i++)
		{
			for (j=1;j<=(n/2)-i;j++)
				cout<<" ";
			cout<<"/";
			for (j=1;j<=k;j++)
				cout<<" ";
			cout<<"\\"<<endl;
			k=k+2;
		}
	return 0;
}