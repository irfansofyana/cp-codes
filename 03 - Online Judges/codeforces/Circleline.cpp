#include <bits/stdc++.h>
using namespace std;
int main(){
	int s,t,n,i,jum=0,jumlah1=0,jumlah2=0,ditanya;
	int A[101];
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
		jum+=A[i];
	}
	
	cin>>s>>t;
	if (s==t)
		ditanya=0;
	else if (s<t)
		{
			for (i=s-1;i<=t-2;i++)
				{
					jumlah1+=A[i];
				}
			jumlah2=jum-jumlah1;
			ditanya=min(jumlah1,jumlah2);
		}
	else if (s>t)
		{
			for (i=t-1;i<=s-2;i++)
				{
					jumlah1+=A[i];
				}
			jumlah2=jum-jumlah1;
			ditanya=min(jumlah1,jumlah2);
		}
	printf("%d\n",ditanya);
}