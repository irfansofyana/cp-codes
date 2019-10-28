#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,sebelumnya=0;
	int banyak=1;
	int A[100000],B[100000];

	
	cin>>n;
	int i;
	for (i=0;i<n;i++)
		cin>>A[i]>>B[i];
	
	for (i=0;i<n-1;i++)
		{
			if ((A[i]==A[i+1]) && (B[i]==B[i+1]))
				{
					banyak++;
				}
			else
				{
					if (banyak>sebelumnya)
						sebelumnya=banyak;
					banyak=1;
				}
		}
	if ((A[n-1]==A[n-2]) && (B[n-1]==B[n-2])){
		if (banyak>sebelumnya)
			printf("%d\n",banyak);
		else
			printf("%d\n",sebelumnya);
	}
	else
	{
		if (banyak>sebelumnya)
			printf("%d\n",banyak);
		else
			printf("%d\n",sebelumnya);
	}
}