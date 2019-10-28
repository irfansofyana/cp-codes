#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,d;
	int i,terakhir;
	int A[101];
	int maks=0;
	
	cin>>n>>m;
	for (i=1;i<=n;i++)
		{
			cin>>A[i];
			if (A[i]%m!=0)
				d=(A[i]/m)+1;
			else
				d=A[i]/m;
			if (d>=maks)
				{
					maks=d;
					terakhir=i;
				}
		}
	printf("%d\n",terakhir);
	return 0;
} 