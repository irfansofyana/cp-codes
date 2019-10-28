#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	string s;
	int i,jumlah,poin,total;
	
	cin>>t>>n;
	while ((t!=0)){
		jumlah=0;
		for (i=1;i<=t;i++){
			cin>>s;
			cin>>poin;
			jumlah=jumlah+poin;
		}
		total=3*n-jumlah;
		cout<<total<<endl;
		cin>>t>>n;
	}
}