#include <bits/stdc++.h>
using namespace std;
int n,i,t;
int A[1010];
void isiarray(){
	A[1]=2;
	A[2]=5;
	A[3]=13;
	for (i=4;i<=1000;i++){
		A[i]=2*A[i-1]+A[i-2]+A[i-3];
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	isiarray();
	cin>>t;
	while (t--){
		cin>>n;
		cout<<A[n]<<endl;
	}
	return 0;
}
