#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,l;
	int k,x,y,sebelumnya;
	bool A[1000];
	int B[1000];
	
	for (i=0;i<1000;i++)
		A[i]=true;
	memset(B,0,sizeof(B));
	cin>>n;
	j=0;
	while (n>0)
		{
			cin>>B[0];			
			for (i=1;i<n;i++)
				cin>>B[i];
			sort(B,B+n);
			sebelumnya=B[0];
			if ((sebelumnya-0>200)  || (abs(1422-B[n-1])*2>200))
				A[j]=false;
			else{
			for (i=1;i<n;i++)
				{
					y=B[i];
					if (abs(y-sebelumnya)>200)
							A[j]=false;
					else 
					sebelumnya=y;
				}
			}
			if (A[j]==false){
				printf("IMPOSSIBLE\n");
				j++;
			}
			else 
				printf("POSSIBLE\n");
			cin>>n;
		}
	return 0;
}