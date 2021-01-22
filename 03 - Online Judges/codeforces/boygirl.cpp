#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,banyak,j,min;
	string s;
	char tukar;
	
	cin>>s;
	for (i=0;i<=(s.length()-2);i++)
		{
			min=i;
			for (j=(i+1);j<=s.length()-1;j++)
				if (s[j]<s[min])
					min=j;
			tukar=s[i];
			s[i]=s[min];
			s[min]=tukar;
		}
	banyak=1;
	for (i=1;i<=s.length()-1;i++){
		if (s[i]!=s[i-1])
			banyak++;
	}
	if ((banyak%2)==1)
		printf("IGNORE HIM!\n");
	else
		printf("CHAT WITH HER!\n");
	return 0;
}