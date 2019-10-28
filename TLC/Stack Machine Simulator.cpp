#include <bits/stdc++.h>
using namespace std;
int n,i,t,j,k;
string s="";
string temp;
string jawaban;
int main(){
	ios_base::sync_with_stdio(0);
	string sementara;
	cin>>t;
	getline(cin,s);
	for (i=1;i<=t;i++){
		cin>>s;
		temp="";
		for (j=0;j<s.length();j++){
			if (s[j]=='+') temp=temp+s[j+1];
			else if (s[j]=='^'){
				sementara="";
				for (k=temp.length()-1;k>=0;k--)
					sementara=sementara+temp[k];
				temp=sementara;
			}
		}
		cout<<temp<<endl;
	}
	
}
