#include <bits/stdc++.h>
using namespace std;
int mod(int p,int q){
	int k,sisa;
	
	sisa=10%q;
	for (k=2;k<=p;k++){
		sisa=(sisa*10)%q;
	}
	return sisa;	
}
int main(){
	int a,b,n;
	int i,j;
	int m,bil;
	string s;
	bool p=false;
	
	cin>>a>>b>>n;
	if (a%b==0){
		cout<<a;
		for (i=1;i<=n;i++)
			cout<<0;
		cout<<endl;
	}
	else{
		m=(a%b)*(mod(n,b));
			for (i=1;i<=10000;i++){
				if ((m+i)%b==0){
					bil=i;
					p=true;
					break;
				}
			}
			if (p==false)
				cout<<-1<<endl;
			else{
			ostringstream convert;
			convert<<bil;
			s=convert.str();
			cout<<a;
			for (i=1;i<=(n-s.length());i++)
				cout<<0;
			cout<<bil<<endl;
			}
	}
}
