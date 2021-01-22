#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,b1,b2;
	double a3,b3,total;
	
	scanf("%d %d %lf",&a1,&a2,&a3);
	scanf("%d %d %lf",&b1,&b2,&b3);
	total=a2*a3+b2*b3;
	printf("VALOR A PAGAR: R$ %.2lf",total);
	return 0;

}