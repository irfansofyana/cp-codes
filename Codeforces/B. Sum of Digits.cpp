#include <bits/stdc++.h>
using namespace std;
int main(){
	int jumlah=0;
	string s,p;
	int i,j,k;
	int banyak=0;
	
	cin>>s;
	if (s.length()==1)
		cout<<0<<endl;
	else{
	for (i=0;i<s.length();i++){
		jumlah+=int(s[i])-48;
	}
	while (jumlah>9){
		banyak++;
		ostringstream convert;
		convert<<jumlah;
		p=convert.str();
		jumlah=0;	
		for (i=0;i<p.length();i++){
			jumlah+=int(p[i])-48;
		}
	}
	cout<<banyak+1<<endl;
	}
	return 0;
}
