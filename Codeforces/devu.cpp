#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n,d,banyak;
	int i,j,jumlah=0;
	
	cin>>n>>d;
	int A[n];
	
	for (i=0;i<n;i++)
		{
			cin>>A[i];
			jumlah+=A[i];
		}
	printf("%d\n",jumlah);
	if ((d-jumlah)%5!=0)
		printf("-1\n");
	else 
		printf("%d\n",((d-jumlah)/5));
	return 0;
}