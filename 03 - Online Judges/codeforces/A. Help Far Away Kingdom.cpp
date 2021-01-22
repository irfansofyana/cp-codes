#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,i,j;
	string s;
	int m,k;
	string p="";	
	getline(cin,s);
	m=s.find('.');
	if (s[m-1]!='9' && int(s[m+1])<'5'){
		for (i=0;i<m;i++)
			p=p+s[i];
		cout<<p<<endl;
	}
	else if (s[m-1]!='9' && int(s[m+1])>='5'){
		for (i=0;i<m-1;i++)
			p=p+s[i];
		p=p+char(int(s[m-1])+1);
		cout<<p<<endl;
	}
	else if (s[m-1]=='9')
		cout<<"GOTO Vasilisa."<<endl;
	return 0;
}
