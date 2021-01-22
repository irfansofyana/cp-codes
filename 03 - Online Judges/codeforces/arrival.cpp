#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,min,max,idxn,idxm,banyak=0;
	int A[101];	
	
	cin>>n;
	max=0;
	for (i=0;i<n;i++)
		{
			cin>>A[i];
			if (i==0)
				{
					if (A[i]>max){
						max=A[i];
						idxm=i;
					}
					min=A[i];
					idxn=i;
				}
			else
			{
				if (A[i]>max){
					max=A[i];
					idxm=i;
				}
				else if (A[i]<=min){
					min=A[i];
					idxn=i;
				}
			}
		}
	if (idxm<idxn){
		banyak=idxm+n-idxn;
		printf("%d\n",banyak-1);
		}
	else if (idxm>idxn){
		banyak=idxm+n-idxn-1;
		printf("%d\n",banyak-1);
	}
	return 0;
}