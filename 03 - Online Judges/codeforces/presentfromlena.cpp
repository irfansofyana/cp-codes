#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,i,n;
	int g,h,j;
	
	cin>>n;
	for (i=1;i<=(n+1);i++){
		for (j=1;j<=(n+1)-i;j++)
			cout<<"  ";
		a=0;
		if (i==1)
		{
			for (g=1;g<=i;g++){
			cout<<a;
			a++;
			}
		}
		else
		{
		for (g=1;g<=i;g++){
			cout<<a<<" ";
			a++;
		}
		}
		a=a-2;
		for (g=1;g<=i-1;g++){
		if (g!=i-1)
			cout<<a<<" ";
		else 
			cout<<a;
		a=a-1;
		}
		cout<<endl;
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=i;j++)
			cout<<"  ";
		a=0;
		if (i==n){
		for (g=1;g<=(n+1)-i;g++){
			cout<<a;
			a++;
		}
		}
		else
		{
		for (g=1;g<=(n+1)-i;g++){
			cout<<a<<" ";
			a++;
		}
		}
		a=a-2;
		for (g=1;g<=(n-i);g++){
		if (g!=(n-i)) 
			cout<<a<<" ";
		else 
			cout<<a;
		a=a-1;
		}
		cout<<endl;
	}
	return 0;
}