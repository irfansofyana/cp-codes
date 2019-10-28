#include <bits/stdc++.h>
using namespace std;
long long A[10000],B[100][100];
long long i,j,n,k;

void isiarray(){
	for (i=0;i<=10000;i++){
		A[i]=(i*(i+1))/2;
	}	
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	isiarray();
	cin>>n;
	k=0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			B[i][j]=A[j+k+1];
		}
		k++;
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
