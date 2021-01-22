#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,m,s,sisa;
	
	scanf("%d",&n);
	h=(n/3600);
	sisa=(n%3600);
	m=(sisa/60);
	s=sisa%60;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
	

}