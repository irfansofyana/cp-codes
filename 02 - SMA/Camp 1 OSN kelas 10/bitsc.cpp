#include <bits/stdc++.h>
using namespace std;
int main(){
	int idx,i;
	string s;
	bool p=false;
	
	getline(cin,s);
	i=0;
	while ((i<s.length()) && (!p))
		{
			if (s[i]=='0')
				{
					idx=i;
					p=true;
				}
			else 
			i++;
		}
	if (p==false)
		s.erase(s.length()-1,1);
	else
		s.erase(idx,1);
	cout<<s<<endl;
}