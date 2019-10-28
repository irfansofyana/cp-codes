#include <bits/stdc++.h>
using namespace std;

int n,i,j;
double W[180][180];
double A[180][180],B[180][180];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++) cin>>W[i][j];
	} cout<<fixed<<showpoint;
	cout<<setprecision(8);
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++){
			A[i][j]=(W[i][j]+W[j][i])/2;
			B[i][j]=(W[i][j]-W[j][i])/2;
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j!=n-1) cout<<A[i][j]<<" ";
			else cout<<A[i][j]<<endl;
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j!=n-1) cout<<B[i][j]<<" ";
			else cout<<B[i][j]<<endl;
		}
	}
	return 0;
}
