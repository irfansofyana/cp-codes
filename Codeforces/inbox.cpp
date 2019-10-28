#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j=0,banyak=0;
	int A[1000],idx[1000];
	
	scanf("%d",&n);
	for (i=0;i<n;i++){
		cin>>A[i];
		if (A[i]==1){
			idx[j]=i;
			j++;
		}
	}
	banyak=j;
	for (i=0;i<j-1;i++)
		{
			if (idx[i+1]-idx[i]>=2)
					banyak++;
		}
	cout<<banyak<<endl;
}