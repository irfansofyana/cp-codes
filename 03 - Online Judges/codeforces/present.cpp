#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,tukar;
	int A[101];
	int B[101];
	cin>>n;
	tukar=n;
	for (i=1;i<=n;i++)
		cin>>A[i];
	for (i=1;i<=n;i++){
		B[A[i]]=i;
	}
	for (i=1;i<=n;i++)
		cout<<B[i]<<" ";
	cout<<endl;
}