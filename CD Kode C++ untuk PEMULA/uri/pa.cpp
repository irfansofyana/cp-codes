#include <bits/stdc++.h>
using namespace std;
int main()
{
	double A[6];
	int i;
	int j=0;
	double jumlah=0,rata;
	for (i=0;i<=5;i++)
		{
			scanf("%lf",&A[i]);
				if (A[i]>0)
					{
					j++;
					jumlah=jumlah+A[i];
					}
		}
	rata=(jumlah/j);
	printf("%d valores positivos\n",j);
	printf("%.1lf\n",rata);
	return 0;
}