#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int i,jumlah=0;
	int B[100];
	
	cin>>n;
	for (i=1;i<=7;i++)
		cin>>B[i];
		
	i=1;
	while (n>0)
		{
			n=n-B[i];
			i++;
			if (i>7)
				i=i-7;
		}
	if (i!=1)
		cout<<i-1<<endl;
	else if (i==1)
		cout<<7<<endl;
}