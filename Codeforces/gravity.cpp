#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int A[101];
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	for (i=0;i<n;i++){
		if (i!=n-1)
			cout<<A[i]<<" ";
		else
			cout<<A[i]<<endl;
	}	
}