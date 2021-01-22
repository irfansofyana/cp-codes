#include <bits/stdc++.h>
using namespace std;
int n,i,j;
int A[100010];
int B[100010];

void isiarray(){
	A[2]=1;
	A[3]=3;
	A[4]=3;
	for (i=5;i<=100000;i++){
		A[i]=A[i-1]+A[i-2]-A[i-3];
	}	
}
int main(){
	isiarray();
	cin>>n;
	for (i=0;i<n;i++){
		cin>>B[i];
	}	
	cout<<A[n]<<endl;
}
