#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2,s3,s4;
	int n,i,j,min;
	char temp;
	
	cin>>s1;
	cin>>s2;
	cin>>s3;
	s4=s1+s2;
	for (i=0;i<=s4.length()-1;i++)
		{
			min=i;
			for (j=i+1;j<=s4.length();j++)
				if (s4[j]<s4[min])
					min=j;
			temp=s4[i];
			s4[i]=s4[min];
			s4[min]=temp;
		}
	for (i=0;i<=s3.length()-1;i++)
		{
			min=i;
			for (j=i+1;j<=s3.length();j++)
				if (s3[j]<s3[min])
					min=j;
			temp=s3[i];
			s3[i]=s3[min];
			s3[min]=temp;
		}
	if (s4==s3)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}