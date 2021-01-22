#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,v;
	int A[1000],Ans[1000];
	int x,banyak=0,i,j,k;
	
	cin>>n>>v;
	k=0;
	for (i=0;i<n;i++)
		{
			cin>>x;
			for (j=0;j<x;j++)
				cin>>A[j];
			sort(A,A+x);
			if (A[0]<v){
				banyak++;
				Ans[k]=i+1;
				k++;
			}
		}
	cout<<banyak<<endl;
	for (i=0;i<k;i++)
		{
			if (i!=k-1)
				cout<<Ans[i]<<" ";
			else
				cout<<Ans[i]<<endl;
		}
	return 0;
}