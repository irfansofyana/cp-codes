#include <bits/stdc++.h>

using namespace std;
int main()
{
	int valid=0,inv=0;
	double jumlah=0;
	double rata,n;
	int i;
	
	while (valid!=2)
		{
			cin>>n;
				if ((n>=0) && (n<=10))
					{
						valid++;
						jumlah=jumlah+n;
					}
				else
					inv++;
		}
	
	for (i=1;i<=inv;i++)
		printf("nota invalida\n");
	rata=(jumlah/2);
	printf("media = %.2lf\n",rata);
	return 0;
}