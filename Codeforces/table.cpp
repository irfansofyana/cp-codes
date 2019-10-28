#include <bits/stdc++.h>
using namespace std;
	int n,k,pos;
	int A[1000][1000];
	int i,j;
	
int main(){
	cin>>n>>k;
	pos=n-1;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j==pos) A[i][j]=k;
			else A[i][j]=0;
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
