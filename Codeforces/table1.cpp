#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,pos,k;
	int A[1000][1000];
	
	cin>>n>>k;
	pos=n-1;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j==pos) A[i][j]=0;
			else A[i][j]=k;
		}
		pos=pos-1;
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j==n-1) cout<<A[i][j]<<endl;
			else cout<<A[i][j]<<" ";
		}
	}
	return 0;
}