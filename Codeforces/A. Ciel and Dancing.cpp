#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,banyak=0;
	int A[1000],B[1000];
	
	cin>>n>>m;
	for (i=0;i<=n;i++)
		A[i]=i;
	for (i=0;i<=m;i++)
		B[i]=i;
	banyak=m+n-1;
	cout<<banyak<<endl;
	for (i=1;i<=m;i++){
		cout<<A[1]<<" "<<B[i]<<endl;
	}
	for (i=2;i<=n;i++)
		cout<<A[i]<<" "<<B[1]<<endl;

}
