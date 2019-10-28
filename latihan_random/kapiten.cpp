#include <bits/stdc++.h>
using namespace std;
string s; char c;
int main(){
	int tot=0,m;
	cin>>m>>c;
	getchar();
	getline(cin,s);
	for (int i=0;i<s.length();i++){
		if (s[i]==c || s[i]==char(int(c)+32) || s[i]==char(int(c)-32)) tot++;
	} 
//	cout<<s<<endl;
	cout<<tot<<endl;
}
