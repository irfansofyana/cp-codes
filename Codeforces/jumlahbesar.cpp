#include <bits/stdc++.h>
using namespace std;
int min(int p,int q){
	if (p<q)
		return p;
	else if (p>=q)
		return q;
}
int main(){
	int i,j,jumlah=0;
	string s1,s2,p="";
	
	getline(cin,s1);
	getline(cin,s2);
	for (i=min(s1.length(),s2.length())-1;i>=0;i--){
		if (min(s1.length(),s2.length())==s1.length()){
		jumlah=(int(s1[i])-48)+(int(s2[i+1])-48);
		if (jumlah>=10){
			jumlah=jumlah-10;
			s1[i-1]=static_cast<char>(int(s1[i-1])+1);
		p=static_cast<char>(jumlah+48)+p;
		}
	}
		else{
			jumlah=(int(s1[i])-48)+(int(s2[i+1])-48);
		if (jumlah>=10){
			jumlah=jumlah-10;
			s1[i-1]=static_cast<char>(int(s1[i-1])+1);
		}
		p=static_cast<char>(jumlah+48)+p;
	}
	}
	if (s1.length()>s2.length()){
		for (i=0;i<s1.length()-s2.length();i++)
			p=s1[i]+p;
	}
	else if (s2.length()>s1.length()){
		for (i=0;i<s2.length()-s1.length();i++){
			p=s2[i]+p;
		}
	}
	cout<<p<<endl;
}

