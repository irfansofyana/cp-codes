#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
long long A[1000][1000];
long long  idx1,idx2;

void kosong(){
	for (i=0;i<n;i++){
		for (j=0;j<2*n-1;j++){
			A[i][j]=0;
		}
	}
}

void pascal(){
	A[0][n-1]=1;
	idx1=n-2;
	idx2=n;
	for (i=1;i<n;i++){
		A[i][idx1]=1;
		for (j=idx1+1;j<idx2;j++){
			if ((j-idx1)%2==0){
				A[i][j]=A[i-1][j-1]+A[i-1][j+1];
			}
		}
		A[i][idx2]=1;
		idx1--;
		idx2++;
	}
	for (i=0;i<n;i++){
		for (j=0;j<2*n-1;j++){
				if (A[i][j]==0 && A[i][j+1]==0) cout<<" ";
				else if (A[i][j]==0 && A[i][j+1]!=0) cout<<" ";
				else if (A[i][j]!=0 && A[i][j+1]==0 && A[i][j+2]==0){
					cout<<A[i][j]<<endl; break;	
				}
				else if (A[i][j]!=0 && A[i][j+1]==0) cout<<A[i][j];
				else if (A[i][j]!=0 && A[i][j+1]!=0) cout<<A[i][j]<<" ";
		}
	}
}

int main(){
	cin>>n;
	kosong();
	pascal();
	return 0;
}
