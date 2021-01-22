#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	string s;
	bool p=false,q=false,r=false,t=false;
	
	cin>>s;
	i=0;
	while ((i<=s.length()-1) && (!p))
		{
			if (s[i]=='h')
				p=true;
		}
	int j;
	j=i+1;
	while ((j<=s.length()-1) && (!q))
		{
			if ((s[j]!='h') || (s[j]!='e'))
				j++;
			else if ((s[j]=='e'))
				q=true;
		}
	int k;
	k=j+1;
	int banyak=0;
	while ((k<=s.length()-1) && (!r)){
		if ((s[k]!='e') && (s[k]!='l'))
			k++;
		else if ((s[k]=='l'))
			{
				banyak++;
			}
		if (banyak==2)
			r=true;
	}
	int f;
	f=k+1;
	while ((f<=s.length()-1) && (!t))
		{
			if ((s[f]!='o'))
				f++;
			else if (s[f]=='o')
				t=true;
		}
	if ((p&&q) && (r&&t))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}