	#include <bits/stdc++.h>
	using namespace std;
	int main(){
		long long n,i,banyak;
		long long bmin,bmax,selisih,j;
		
		scanf("%I64d",&n);
		long long A[n];
		for (i=0;i<n;i++)
			{
				scanf("%I64d",&A[i]);
			}
		sort(A,A+n);
		selisih=A[n-1]-A[0];
		bmin=1;
		for (i=0;i<n-1;i++)
			{
				if (A[i]!=A[i+1])
					break;
				else
				bmin++;
			}
		if (bmin==n)
			{
				banyak=((n*(n-1))/2);
			}
		else
		{
		bmax=1;
		for (j=n-1;j>=1;j--)
			{
				if (A[j]!=A[j-1])
					break;
				else
				bmax++;
			}
			banyak=bmin*bmax;
		}
		printf("%I64d %I64d\n",selisih,banyak);
	}