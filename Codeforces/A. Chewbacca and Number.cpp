#include <bits/stdc++.h>
using namespace std;
string s;
int i,temp;
string ans;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>s; ans="";
	for (i=0;i<s.length();i++){
		if (i==0){
			if (s[i]=='9') ans=ans+'9';
			else if (s[i]>='5') ans=ans+char(57-(int(s[i])-48));
			else ans=ans+s[i];
		}
		else if (s[i]>='5') ans=ans+char(57-(int(s[i])-48));
		else ans=ans+s[i];
	}
	cout<<ans<<endl;
}
