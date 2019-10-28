#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,diambil=0,j,k;
	int A[1000];
	int s=0,d=0;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	i=0;
	j=0;
	k=n-1;
	while (diambil!=n)
		{
			if ((i+1)%2==1)
				{
					if (A[j]>=A[k]){
						s=s+A[j];
						j=j-1;
						diambil++;
						i++;
					}
					else if (A[j]<A[k]){
						s=s+A[k];
						k=k-1;
						diambil++;
						i++;
					}
				}
			else if ((i+1)%2==0)
				{
					if (A[j]>=A[k]){
						d=d+A[j];
						j=j-1;
						diambil++;
						i++;
					}
					else if (A[j]<A[k]){
						d=d+A[k];
						k=k-1;
						diambil++;
						i++;
					}
				}
		}
		cout<<s<<" "<<d<<endl;
}