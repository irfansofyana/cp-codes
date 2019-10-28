#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int i,temp;
	int A[1002],B[1002];
	
	for (i=1;i<=1000;i++){
		B[i]=i;
	}
	cin>>n;
	temp=B[n];
	for (i=1;i<=n;i++){
		if (i==1) 
			A[i]=temp;
		else 
			A[i]=B[i-1];
	}
	for (i=1;i<=n;i++){
		if (i!=n)
			cout<<A[i]<<" ";
		else
			cout<<A[i]<<endl;
	}
}
