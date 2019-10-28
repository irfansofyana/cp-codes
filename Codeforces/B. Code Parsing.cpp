#include <bits/stdc++.h>
using namespace std;
int m,n,i,j;
string s;
string sementara,jawaban;

int main(){
	getline(cin,s);
	sementara=s;
	m=sementara.find("yx");
	while(m>=0 && m<sementara.length()){
	sementara="";
	i=0;
	while (i<s.length()){
		if (s[i]=='y' && s[i+1]=='x'){
			sementara=sementara+s[i+1]+s[i];
			i=i+2;
		}
		else{
			sementara=sementara+s[i];
			i++;
		}
	}
	i=0;
	jawaban="";
	m=sementara.find("xy",0);
	while (m<sementara.length()){
		sementara.erase(m,2);
		m=sementara.find("xy",m);
	}
	m=sementara.find("yx");
	}
}
