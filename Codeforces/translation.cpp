#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2,s3;
	int i,n;
	
	cin>>s1;
	cin>>s2;
	s3="";
	
	for (i=s1.length()-1;i>=0;i--)
		{
			s3=s3+s1[i];
		}
	if (s2==s3)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}