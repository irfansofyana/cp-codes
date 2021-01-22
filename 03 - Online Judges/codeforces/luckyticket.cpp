#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,t,belakang=0,depan=0,m,j;
	string s;
	bool p=true;
	
	cin>>m;
	cin>>s;
	
	i=0;
	while ((i<s.length()) && (p))
		{
			if ((s[i]!='4') && (s[i]!='7'))
				p=false;
			else
			i++;
		}
	if (p==false)
		printf("NO\n");
	else
		{
			for (i=0;(i<s.length()/2);i++)
				{
					belakang=belakang+int(s[i])-48;
				}
			for (j=s.length()/2;j<s.length();j++)
			{
				depan=depan+int(s[j])-48;
			}
			if (belakang==depan)
				printf("YES\n");
			else
				printf("NO\n");
		}
}