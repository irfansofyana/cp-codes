#include <bits/stdc++.h>
using namespace std;
int main(){
	int i;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	
	for (i=0;i<=s1.length()-1;i++){
		if ((int(s1[i])>=65) && (int(s1[i])<=90))
			s1[i]=char(int(s1[i])+32);
		if ((int(s2[i])>=65) && (int(s2[i])<=90))
			s2[i]=char(int(s2[i])+32);
	}
	if (s1<s2)
		printf("-1\n");
	else if (s1>s2)
		printf("1\n");
	else
		printf("0\n");
	return 0;
}