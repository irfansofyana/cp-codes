#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	int A[30][30];
	int banyak=0;
	int jumlahr[30],sumk[30]; 
	
	memset(jumlah,0,sizeof(jumlah));
	memset(sumk,0,sizeof(sumk));
	cin>>n;
	for (i=0;i<n;i++)
		{
			k=0;
			for (j=0;j<n;j++){
				cin>>A[i][j];
				jumlah[i]=k+A[i][j]
				k=jumlah[i];
			}
		}
	for (i=0;i<n;i++)
		{
			k=0;
			for (j=0;j<n;j++)
				{
					sumk[i]=k+A[j][i];
					k=sumk[i];
				}
		}
	for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				{
					if ((jumlah[i]-A[i][j])<(sumk[j]-A[i][j]))
						banyak++;
				}
		}
	cout<<banyak<<endl;
}