#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,b,x,y,min,k,j;
	int i,biaya,ditanya;
	
	j=1;
	cin>>n>>m>>a>>b;
	for (i=0;i<=n;i++){
		y=i;
		k=(n-y);
			if (k%m==0)
				{
					x=(k/m);
					if (j==1){
						biaya=b*x+a*y;
						min=biaya;
						j++;
					}
					else
						{
							biaya=b*x+a*y;
							if (biaya<min){
								min=biaya;
							}
						}
				}
	}
	printf("%d\n",min);
	return 0;
}	