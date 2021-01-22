#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int a,b,jumlah=0;
	int C[1000];
	
	cin>>n;
	for (i=1;i<=n-1;i++)
		cin>>C[i];
	cin>>a>>b;
	for (i=a;i<b;i++)
		jumlah+=C[i];
	cout<<jumlah<<endl;
	return 0;
}