#include <bits/stdc++.h>
using namespace std;
string s,t;
int n,i,j;
int pos;

int main(){
	cin>>s;
	cin>>t;
	pos=1;
	for (i=0;i<t.length();i++){
		if (s[pos-1]==t[i]) pos++; 
	}
	cout<<pos<<endl;
}
