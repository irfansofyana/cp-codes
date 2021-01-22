#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int i,j;
	char A[30]= {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
	string q="",s;
	char c;
	bool p=false;
	
	cin>>c;
	cin>>s;
	if (c=='R')
		{
			for (i=0;i<s.length();i++)
				{
					p=false;
					j=0;
					while ((j<30) && (!p))	
						{
							if (s[i]==A[j])
								{
									q=q+A[j-1];
									p=true;
								}
							else
							j++;
						}
				
				}
		}
	else if (c=='L')
		{
				for (i=0;i<s.length();i++)
				{
					p=false;
					j=0;
					while ((j<30) && (!p))	
						{
							if (s[i]==A[j])
								{
									q=q+A[j+1];
									p=true;
								}
							else
							j++;
						}
				
				}
		
		}
	cout<<q<<endl;
}