#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i,j,jumlah;
	int A[100000];
	
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>n;
		jumlah=0;
		for (j=0;j<n;j++) cin>>A[j];
		sort(A,A+n);
		for (j=n-5;j<n;j++) jumlah+=A[j];
		cout<<jumlah<<endl;
	}
}
