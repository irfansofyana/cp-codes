#include <bits/stdc++.h>

using namespace std;
int main()
{
	int A[5];
	int i,j,n;
	
	for (i=1;i<=5;i++)
		A[i]=0;
		
	cin>>n;
	while (n!=4)
		{
			A[n]++;
			cin>>n;
		}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",A[1]);
	printf("Gasolina: %d\n",A[2]);
	printf("Diesel: %d\n",A[3]);
	return 0;
}