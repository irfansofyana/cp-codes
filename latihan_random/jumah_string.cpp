#include <bits/stdc++.h>
using namespace std;

string s,temp,jawab;
int n,i,j,sementara;
int idx=0;
int jumlah;

int main(){
	getline(cin,s);
	idx=0;
	sementara=s.find(" ",idx);
	jumlah=0;
	jawab="";
	while (sementara>=0 && sementara<s.length()){
		temp=s.substr(idx,sementara-idx);
			for (j=0;j<temp.length();j++){
				if ((temp[j]!='0') && (int(temp[j])>=48 && int(temp[j])<=57)){
					jawab=jawab+temp[j]+'+';
					jumlah+=int(temp[j])-48;
				}
			}
		idx=sementara+1;
		sementara=s.find(" ",idx);
	}
	for (i=idx;i<s.length();i++){
		if (int(s[i])>=48 && int(s[i])<=57){
			if (s[i]!='0'){
				jawab=jawab+s[i]+'+';
				jumlah+=int(s[i])-48;
			}
		}
	}
	jawab.erase(jawab.length()-1,1);
	cout<<jawab<<"="<<jumlah<<endl;
}
