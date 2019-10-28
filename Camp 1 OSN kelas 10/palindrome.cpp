#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int i,j;
	bool p=true;
	
	getline(cin,s);
	i=0;
	j=s.length()-1;
	while ((i<=j) && (p))
		{
			if (s[i]!=s[j])
				p=false;
			else
			{
				i=i+1;
				j=j-1;
			}
		}
	if (p)
		printf("YA\n");
	else
		printf("NO\n");
}