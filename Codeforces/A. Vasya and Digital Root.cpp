#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,d;
	int i;
	string s;
	
	cin>>k>>d;
	if (d==0){
		if (k>1)
			cout<<"No solution"<<endl;
		else if (k==1)
			cout<<0<<endl;
	}
	else{
		for (i=0;i<k-1;i++)
			cout<<9;
		cout<<d<<endl;
	}
}
