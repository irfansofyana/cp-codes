#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,h=0,l=0,o=0,e=0;
	string s,k="";
	
	getline(cin,s);
	i=0;
	while ((i<s.length())){
		if ((s[i]=='h') && (h>=0)){
			h++;
		}
		else if ((s[i]=='e') && (h>=1)){
			e++;
		}
		else if (((s[i]=='l')) && (e>=1)){
			l++;
		}
		else if ((s[i]=='o') && (l>=2)){
			o++;
		}
		i++;
	}
	if ((h>0) && (e>0) && (l>0) && (o>0))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
