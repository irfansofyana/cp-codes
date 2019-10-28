#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int b=0,k=0,i;
	
	getline(cin,s);
	for (i=0;i<s.length();i++)
		{
			if ((int(s[i])>=65) && (int (s[i])<=90))
				b++;
			else if ((int(s[i])>=97) && (int(s[i])<=122))
				k++;
		}
	if (b>k){
		for (i=0;i<s.length();i++)
			if ((int(s[i])>=97) && (int (s[i])<=122))
				s[i]=char(int(s[i])-32);
			}
	else
		{
			for (i=0;i<s.length();i++)
				{
					if ((int(s[i])>=65) && (int (s[i])<=90))
						s[i]=char(int(s[i])+32);
				}
		}
	cout<<s<<endl;
	return 0;
}