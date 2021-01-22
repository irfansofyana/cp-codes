#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[100][100];
int maks;

int main(){
	cin.tie(0);
	cin>>n;
	for (i=0;i<n;i++) A[0][i]=1;
	for (i=0;i<n;i++) A[i][0]=1;
	
	for (i=1;i<n;i++){
		for (j=1;j<n;j++){
			A[i][j]=A[i-1][j]+A[i][j-1];
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (i==0 && j==0) maks=A[i][j];
			else if (A[i][j]>maks) maks=A[i][j];
		}
	} 
	cout<<maks<<endl;
	return 0;
}
