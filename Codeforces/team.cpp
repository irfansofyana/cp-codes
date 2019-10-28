#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,banyak,total;
	int A[1000];
	
	cin>>n;
	total=0;
	for(i=1;i<=n;i++)
		{
			banyak=0;
			for(j=1;j<=3;j++)
				{
					cin>>A[j];
						if (A[j]==1)
							banyak++;
				}
			if (banyak>=2)
				total++;
		}
	cout<<total<<endl;
	return 0;
}