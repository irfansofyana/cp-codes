#include <bits/stdc++.h>

long factorial(int a);

using namespace std;
int main()
{
	int b;
	cin>>b;
	cout<<factorial(b)<<endl;
}

long factorial(int a);
{
	if (a==1) 
		return 1;
	else
		return a*factorial(a-1);
}
	
