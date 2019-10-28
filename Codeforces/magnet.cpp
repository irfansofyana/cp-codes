#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,beda;
	string s[100001];
	
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>s[i];
	
	beda=1;
	for (i=2;i<=n;i++)
		if (s[i]!=s[i-1])
			beda++;
	printf("%d\n",beda);
	return 0;
}