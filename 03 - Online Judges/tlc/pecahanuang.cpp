#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n,k,j;
	int a,b,c,d,e,f,g,h,i;
	
	cin>>k;
	a=(k/1000);
		if (a!=0)
			printf("%d %d\n",1000,a);
	b=((k-1000*a)/500);
		if (b!=0)
			printf("%d %d\n",500,b);
	c=((k-1000*a-500*b)/200);
		if (c!=0)
			printf("%d %d\n",200,c);
	d=((k-1000*a-500*b-200*c)/100);
		if (d!=0)
			printf("%d %d\n",100,d);
	e=((k-1000*a-500*b-200*c-100*d)/50);
		if (e!=0)
			printf("%d %d\n",50,e);
	f=((k-1000*a-500*b-200*c-100*d-50*e)/20);
		if (f!=0)
			printf("%d %d\n",20,f);
	g=((k-1000*a-500*b-200*c-100*d-50*e-20*f)/10);
		if (g!=0)
			printf("%d %d\n",10,g);
	h=((k-1000*a-500*b-200*c-100*d-50*e-20*f-10*g)/5);
		if (h!=0)
			printf("%d %d\n",5,h);
	i=((k-1000*a-500*b-200*c-100*d-50*e-20*f-10*g-5*h)/2);
		if (i!=0)
			printf("%d %d\n",2,i);
	j=((k-1000*a-500*b-200*c-100*d-50*e-20*f-10*g-5*h-2*i));
		if (j!=0)
			printf("%d %d\n",1,j);
	return 0;
}