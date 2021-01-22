#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int A[10000];
	int x,banyak=0;
	
	cin>>n;
	for (i=1;i<=n;i++) A[i]=i;
	for (i=1;i<=n;i++){
		cin>>x;
		A[x]=0;
	}
	for (i=1;i<=n;i++)
		if (A[i]!=0) banyak++;
	cout<<banyak<<endl;
}
