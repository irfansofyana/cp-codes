#include <bits/stdc++.h>
using namespace std;
int m,i,temp;
string s,ans;
char smt;

int main(){
	cin>>s;
	cin>>m;
	ans=s;
	for (i=1;i<=m;i++){
		cin>>temp;
		if (i%2!=0){
		smt=s[temp-1];
		s[temp-1]=s[s.size()-temp];
		s[s.size()-temp]=smt;
		}
	}
	cout<<s<<endl;
}
