#include <bits/stdc++.h>
using namespace std;
int n;
char A[1000][1000];
int i,j,k,l;

int main(){
	cin>>n;
	for (i=0;i<n;i++){
		for (j=0;j<=i;j++) A[i][j]='*';
		for (j=2*n-1;j>=2*n-1-i;j--){
			A[i][j]='*';
		}
		for (j=i+1;j<=2*n-2-i;j++) A[i][j]='.';
	}
	for (i=0;i<n;i++){
		for (j=0;j<2*n;j++){
			if (j!=2*n-1) cout<<A[i][j];
			else cout<<A[i][j]<<endl;
		}
	}
	return 0;
}
