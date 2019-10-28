#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,min,t,k,j;
	int A[1000];
	
	cin>>n>>m;
	for (i=0;i<m;i++)
		cin>>A[i];
	
	sort(A,A+m);
	t=1;
	i=0;
	j=n-1;
	while (j<=m-1)
		{
			if (t==1){
				min=A[j]-A[i];
				t++;
			}
			else
				{
					k=A[j]-A[i];
					if (k<min)
						min=k;
				}
			i++;
			j++;
		}
	cout<<min<<endl;
}