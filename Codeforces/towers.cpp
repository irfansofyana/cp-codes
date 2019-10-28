#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,max=0,x,banyak=0;
	int A[1001];
	
	cin>>n;
	for (i=1;i<=1001;i++)
		{
			A[i]=0;
		}
	for (i=1;i<=1001;i++)
		{
			cin>>x;
			A[x]++;
			if (A[x]>max)
				max=A[x];
		}
	for (i=1;i<=1001;i++)
		{
			if (A[i]!=0)
				banyak++;
		}
	printf("%d %d\n",max,banyak);
	return 0;
}