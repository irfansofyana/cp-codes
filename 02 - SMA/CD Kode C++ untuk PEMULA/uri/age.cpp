#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int a,b,c,sisa;
	
	scanf("%d",&n);
	a=(n/365);
	sisa=(n%365);
	b=(sisa/30);
	c=sisa%30;
	printf("%d ano(s)\n",a);
	printf("%d mes(es)\n",b);
	printf("%d dia(s)\n",c);
	return 0;
	
}