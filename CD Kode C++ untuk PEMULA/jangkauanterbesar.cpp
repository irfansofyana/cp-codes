#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int k,j,i,s,l,m,maks,p,min;
	int nilai[30],max[30],maximal[30],B[30];;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++) //banyak test_cast
		{
			scanf("%d",&k);  //banyak kelas
			for (j=1;j<=k;j++)
				{
					scanf("%d",&s);//banyak siswa
					scanf("%d",&nilai[1]);
					maks=nilai[1];
					min=nilai[1];
						for (l=2;l<=s;l++)
							{
							scanf("%d",&nilai[l]); //menginput nilai siswa 
							if (nilai[l]>maks) 
								maks=nilai[l];
							else if (nilai[l]<min)
								min=nilai[l];
								
							}
					max[j]=maks-min;
				}
			maximal[i]=max[1];
			B[i]=1;
			for (p=2;p<=k;p++)
				if (max[p]>maximal[i])
					{
						maximal[i]=max[p];
						B[i]=p;
					}
		}
	for (i=1;i<=n;i++) //banyak test_cast
		printf("%d\n",B[i]);
}

