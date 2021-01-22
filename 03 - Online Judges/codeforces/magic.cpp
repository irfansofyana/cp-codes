#include <bits/stdc++.h>
using namespace std;
int main(){
	bool p=true;
	int i,n,j,banyak4=0,banyak1=0;
	string s;
	
	scanf("%d",&n);
	ostringstream convert;
	convert<<n;
	s=convert.str();
	
	s
	i=1;
	while ((i<s.length()) && (p))
		{
			if (s[i]=='4')
				banyak4++;
			else if (s[i]=='1')
				banyak1++;
				
		}
}