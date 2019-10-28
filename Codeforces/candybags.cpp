#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	int x,p;
	int jumlah=0;
	
	cin>>n;
	k=n/2;
	int satuorang;
	satuorang=(k*(n*n+1));
	
	j=1;
	for (i=1;i<=n;i++)
		{
			p=(n*n+1);
			while (j<=k*i)
			{
				if (j!=k){
					x=p-j;
					cout<<j<<" "<<x<<" ";
				}
				else if (j==k){
					x=p-j;
					cout<<j<<" "<<x<<endl;
				}
				j++;
			}
		}
}