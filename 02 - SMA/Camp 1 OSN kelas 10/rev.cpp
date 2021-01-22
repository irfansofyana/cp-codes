#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,q,m,idxc,idxd,keisi;
	int A[100],B[100],C[100],D[100];
	int i,j,k;
	bool p=true;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	for (i=0;i<n;i++)
		cin>>B[i];
	cin>>j>>k;
	for (i=j;i<=k;i++)
		{
			C[i]=B[i];
			D[i]=A[i];
		}
	q=k+1;
	idxc=q;
	keisi=k-j+1;
	while (keisi!=n)
		{
			m=j;
			while ((m<=k) && (p))
				{
					if (A[q]==C[m])
						p=false;
					else
					m++;
				}
			if (p)
				{
					C[idxc]=A[q];
					keisi++;
					k=k+1;
					idxc++;
					if (idxc>n-1)
						idxc=idxc-n;
					q++;
					if (q>n-1)
						q=q-n;
				}
			else
			{
				p=true;
				q++;
				if (q>n-1)
					q=q-n;
			}
		}
}