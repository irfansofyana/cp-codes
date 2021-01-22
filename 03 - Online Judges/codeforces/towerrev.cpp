#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,max=0,banyak=0;
	int A[1001];
	int B[1001];
	
	for (i=1;i<=1001;i++)
		B[i]=0;
		
	cin>>n;
	for (i=1;i<=n;i++)
		{
			cin>>A[i];
			B[A[i]]++;
			if (B[A[i]]>max)
				max=B[A[i]];
		}
	for (i=1;i<=1001;i++)
		if (B[i]!=0)
			banyak++;
	printf("%d %d\n",max,banyak);
	return 0;
}