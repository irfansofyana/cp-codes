#include <bits/stdc++.h>
using namespace std;

int n,t,i,j,p;
int A[1000];
int banyak;
int main(){
	cin.tie(0);
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>n>>p;
		banyak=0;
		for (j=0;j<n;j++) cin>>A[j];
		for (j=0;j<n-1;j++){
			for (int k=j+1;k<n;k++){
				if (abs(A[j]-A[k])==p) banyak++; 
			}
		}
		cout<<banyak<<endl;
	}
	return 0;
}
