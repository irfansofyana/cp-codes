#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,jumlaha=0,jumlahb=0,k;
	int A[101],B[101];
	bool p=false;
	
	for (i=0;i<=2;i++)
	{
		cin>>A[i];
		jumlaha+=A[i];
	}
	for (j=0;j<=2;j++){
		cin>>B[j];
		jumlahb+=B[j];
	}
	cin>>n;
	i=1;
	while (i<=n-1){
		j=n-i;
		if ((jumlaha<=5*i) && (jumlahb<=10*j))
			p=true;
		i++;
	}
	if (p)
		printf("YES\n");
	else
	{
		if ((jumlaha==0) || (jumlahb==0))
			{
				if ((jumlaha<=5*n) && (jumlahb<=10*n))
					printf("YES\n");
				else#
					printf("NO\n");
			}
		else
		printf("NO\n");
	}
	return 0;
}