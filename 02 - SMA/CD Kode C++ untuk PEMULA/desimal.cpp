#include<bits/stdc++.h>

using namespace std;
int main()
{
	double a,b,d,e;
	int c;
	
	scanf("%lf %lf",&a,&b);
	scanf("%d",&c);
	d=a*1000;
	d=static_cast<int>(d);
	e=(double(d))/1000;
	
	printf("%d tidak sama dengan %.3lf",c,e);
	return 0;

}