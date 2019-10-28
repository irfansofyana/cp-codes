#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[10010];
int jumlah;

int main(){
	cin>>n>>m;
	jumlah=0;
	for (i=0;i<n;i++) cin>>A[i];
	sort(A,A+n);
	for (i=0;i<m;i++){
		if (A[i]<=0) jumlah+=A[i]; 
	}
	cout<<abs(jumlah)<<endl;
}
