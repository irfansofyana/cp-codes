#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while (cin)
	{
		if (n==0)
			printf("vai ter copa!\n");
		else if (n>0)
			printf("vai ter duas!\n");
		cin>>n;
	}
	return 0;
}