

#include<iostream>
using namespace std;
int main()
{
string s,t;
cin>>s>>t;
for(int i=s.length()-1;i>=0;i--)
{
	if(s[i]!='z') {
		s[i]++;
		break;
	}
	else s[i]='a'; 
}
	if(s!=t) cout<<s;
	else cout<<"No such string";
	return 0;
}
