#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,banyak=0,j,min,max;
	long long A[10001];
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>A[i];
	}
	
	for (i=2;i<=n;i++){
		if (i==2)
			{
				if ((A[i]<A[i-1]) || (A[i]>A[i-1]))
					banyak++;
			}
		else
			{
				min=A[1];
				max=A[1];
				for (j=2;j<=i-1;j++)
					{
						if (A[j]<min)
							min=A[j];
						else if (A[j]>max)
							max=A[j];
					}
				if ((A[i]>max) || (A[i]<min))
					banyak++;
			}
	}
	printf("%d\n",banyak);
	return 0;
}