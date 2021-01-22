#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	const string a="abcdefghijklmnopqrstuvwxyz",b="zyxwvutsrqponmlkjihgfedcba";
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>k;
		if (k<=25){
			for (j=k;j>=0;j--)
				cout<<a[j];
			cout<<endl;
		}
		else if (k%25!=0 && k>25){
			for (j=k%25;j>=0;j--)
				cout<<a[j];
			for (j=k/25;j>=1;j--)
				cout<<b;
			cout<<endl;
		}
		else if (k%25==0){
			for (j=k/25;j>=1;j--)
				cout<<b;
			cout<<endl;
		}
	}
}
