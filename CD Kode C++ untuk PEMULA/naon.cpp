#include <bits/stdc++.h>

long long factorial(int a);

using namespace std;
int main()
{
	int b;
	scanf("%d",&b);
	printf("%d\n",b);
}

long long factorial(int a)
{
	if (a==1) 
		return 1;
	else
		return a*factorial(a-1);
}
	
