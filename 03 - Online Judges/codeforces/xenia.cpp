#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,i;
	long long banyak=0,sebelumnya;
	
	cin>>n>>m;
	long long A[m];
	cin>>A[0];
	sebelumnya=A[0];
	if (sebelumnya!=1)
		banyak=sebelumnya-1;
	for (i=1;i<m;i++)
		{
			cin>>A[i];
			if (A[i]>sebelumnya)
				banyak=banyak+A[i]-sebelumnya;
			else if (A[i]<sebelumnya)
				banyak=banyak+n-sebelumnya+A[i];
			sebelumnya=A[i];
		}
	printf("%I64d\n",banyak);
}