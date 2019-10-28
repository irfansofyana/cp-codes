#include <bits/stdc++.h>
using namespace std;
int main(){
	int A[100],B[100],C[100],D[100];
	int n,m,idxc,idxd,l;
	int i,j,k;
	bool p=true;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	for (i=0;i<n;i++)
		cin>>B[i];
	cin>>k>>m;
	for (i=k;i<=m;i++)
		{
			C[i]=B[i];
			D[i]=A[i];
		}
	j=m+1;
	l=m;
	idxc=m+1;
	while (j!=k)
		{
			i=k;
			while ((i<=m) && (p))
				{
					if (A[j]==C[i])
						p=false;
					else
					i++;
				}
			if (p){
				C[idxc]=A[j];
				m=m+1;
				idxc++;
				if (idxc>n-1)
					idxc=idxc-n;
				j++;
				if (j>n-1)
					j=j-n;
			}
			else
				{
					p=true;
					j++;
					if (j>n-1)
						j=j-n;
				}
		}
	j=l+1;
	idxd=l+1;
	while (j!=k)
		{
			i=k;
			while ((i<=l) && (p))
				{
					if (B[j]==D[i])
						p=false;
					else
					i++;
				}
			if (p){
				D[idxd]=B[j];
				idxd++;
				j++;
				if (idxd>n-1)
					idxd=idxd-n;
				l=l+1;
			}
			else
				{
					p=true;
					j++;
					if (j>n-1)
						j=j-n;
				}
		}
	for (i=0;i<n;i++)
		cout<<C[i]<<" ";
	cout<<endl;
	for (j=0;j<n;j++)
		cout<<D[i]<<" ";
	cout<<endl;
	return 0;
}