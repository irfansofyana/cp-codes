#include <bits/stdc++.h>
using namespace std;
long long A[10000];
long long n,i,j,k;
long long B[100][100];

void isiarray(){
	for (i=0;i<10000;i++){
		A[i]=(i*(i+1))/2;
	}	
}
int main(){
	ios_base::sync_with_stdio(0);
	isiarray();
	
	cin>>n;
	for (i=0;i<n;i++)
		B[0][i]=A[i+1];
	for (i=0;i<n;i++)
		B[i][0]=A[i+1];
	for (i=1;i<n;i++){
		for (j=1;j<n;j++){
			B[i][j]=B[i][j-1]+B[i-1][j];
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j==n-1)
				cout<<B[i][j]<<endl;
			else
				cout<<B[i][j]<<" ";
		}
	}
}
