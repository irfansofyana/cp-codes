#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	double median;
	int med;
	
	
	scanf("%d",&n);
	int A[n];
	for (i=0;i<n;i++)
		scanf("%d",&A[i]);
		
	sort(A,A+n);
	if (n%2==0)
		{
			k=(n/2);
			median=(double(A[k-1]+A[k])/2);
			printf("%.2lf\n",median);
		}
	else
		{
			k=(n/2)+1;
			med=A[k-1];
			median=double(med);
			printf("%.2lf\n",median);
		}
	return 0;
}