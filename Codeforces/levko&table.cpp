#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,pos;
	int i,j;
	int A[1000][1000];
	
	cin>>n>>k;
	pos=n-1;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j==pos)
				A[i][j]=k;
			else
				A[i][j]=0;
		}
		pos=pos-1;
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j!=n-1) cout<<A[i][j]<<" ";
			else cout<<A[i][j]<<endl;
		}
	}
}
