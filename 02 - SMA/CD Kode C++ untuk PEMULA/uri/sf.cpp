#include <bits/stdc++.h>
using namespace std;

long long fak(int i);

int main()
{
	int n;
	cin>>n;
	printf("%lld\n",fak(n));
	return 0;
}

long long fak(int i)
{
	if (i==1)
		return 1;
	else
		return i*fak(i-1);
}