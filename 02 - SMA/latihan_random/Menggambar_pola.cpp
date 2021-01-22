#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j;
	char A[1000][1000];
	
	cin>>n>>m;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if (i%2==0 && j%2==0) A[i][j]='*';
			else if (i%2==1 && j%2==1) A[i][j]='#';
			else A[i][j]='$';
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if (j!=m-1) cout<<A[i][j];
			else cout<<A[i][j]<<endl;
		}
 	}	
}
