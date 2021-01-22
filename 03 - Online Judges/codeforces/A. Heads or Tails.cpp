#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y,a,b,i;
	int n;
	int A[10000],B[10000];
	int banyak=0;
	int k=0;
	
	cin>>x>>y>>a>>b;
	
	for (i=a;i<=x;i++){
		for (int j=b;j<i && j<=y;j++){
			A[k]=i;
			B[k]=j;
			banyak++;
			k++;
		}
	}
	cout<<banyak<<endl;
	for (i=0;i<k;i++)
		cout<<A[i]<<" "<<B[i]<<endl;
}
