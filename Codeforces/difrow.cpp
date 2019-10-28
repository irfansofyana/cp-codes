#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int A[110];
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	for (i=0;i<n;i++)
		{
			if (i==0)
				cout<<A[n-1]<<" ";
			else if (i==n-1)
				cout<<A[0]<<endl;
			else
				cout<<A[i]<<" ";
		}
}