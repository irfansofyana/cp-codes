#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int x,i;
	int in=0,o=0;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&x);
			if ((x>=10) && (x<=20))
				in++;
			else
				o++;
	}
	printf("%d in\n",in);
	printf("%d out\n",o);
	return 0;
}