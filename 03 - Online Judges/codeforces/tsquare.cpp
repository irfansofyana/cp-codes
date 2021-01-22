#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,a;
	long long c,d,banyak;
	
	scanf("%I64d %I64d %I64d",&n,&m,&a);
	if (m<=a)
		c=1;
	else if ((m>a) && (m%a!=0))
		c=(m/a)+1;
	else if ((m>a) && (m%a==0))
		c=(m/a);
	
	if (n<=a)
		d=1;
	else if ((n>a) && (n%a!=0))
		d=(n/a)+1;
	else if ((n>a) && (n%a==0))
		d=(n/a);
	
	banyak=c*d;
	printf("%I64d",banyak);
	return 0;
}