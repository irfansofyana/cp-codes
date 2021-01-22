#include <bits/stdc++.h>
using namespace std;
int a,b,i;
string s;

string hasil(string s){
	string ans="";
	for (int z=0;z<s.length();z++){
		if (s[z]=='4' || s[z]=='7') ans=ans+s[z];
	}
	return ans;
}

string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
int main(){
	cin>>a>>b;
	i=a+1;
	while (hasil(ubah(i))!=ubah(b)) i++;
	cout<<i<<endl;
}
