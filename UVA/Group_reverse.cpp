#include <bits/stdc++.h>
using namespace std;

string s,temp,jawab;
int n,i,j,awal;
bool input=true;
string balik(string k){
	string ans="";
	for (int j=k.length()-1;j>=0;j--){
		ans=ans+k[j];
	}
	return ans;
}

int main(){
	cin>>n>>s;
	if (n!=0){
		while (input){
		//	cout<<s<<endl;
			jawab="";
			temp="";
			awal=0;
			for (i=(s.length()/n)-1;i<s.length();i+=(s.length()/n)){
				temp=s.substr(awal,i-awal+1);
				jawab=jawab+balik(temp);
				awal=i+1;
			}
			cout<<jawab<<endl;
			cin>>n;
			if (n!=0) cin>>s;
			else input=false;
		}
	}	
	return 0;
}

