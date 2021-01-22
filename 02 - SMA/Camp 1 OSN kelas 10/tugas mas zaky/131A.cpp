#include <bits/stdc++.h>
using namespace std;
int main(){
	int i;
	string s;
	bool p=false;
	
	cin>>s;
	i=1;
	while ((i<=s.length()-1) && (!p)){
		if ((int(s[i])>=97) && (int(s[i])<=122))
			p=true;
		else
		i++;
	}
	if (p) 
		cout<<s<<endl;
	else
	{
		for (i=0;i<=s.length()-1;i++){
			if ((int(s[i])>=65) && (int(s[i])<=90))
				s[i]=char(int(s[i])+32);
			else if ((int(s[i]>=97)) && (int(s[i])<=122))
				s[i]=char(int(s[i])-32);
		}
		cout<<s<<endl;
	}
	return 0;
}
