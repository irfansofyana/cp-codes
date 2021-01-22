#include <bits/stdc++.h>
using namespace std;
int main(){
	string s,p;
	int n,i;

	cin>>s;
	p="";
	for (i=0;i<=s.length()-1;i++){
		if (((s[i]=='A')||(s[i]=='I')||(s[i]=='U')||(s[i]=='E')||(s[i]=='O')||(s[i]=='Y')) || ((s[i]=='a')||(s[i]=='i')||(s[i]=='u')||(s[i]=='e')||(s[i]=='o')||(s[i]=='y')))
			p=p+"";
		else
			{
				p=p+".";
				if ((int(s[i])>=65) && (int(s[i])<=90))
					p=p+char(int(s[i])+32);
				else
					p=p+s[i];
			}
	}
	cout<<p<<endl;
	return 0;
}