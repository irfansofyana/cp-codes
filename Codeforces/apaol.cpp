#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,m,x;
	int A[10000];
	int idx[10000];
	
	memset(A,0,sizeof(A));
	memset(idx,0,sizeof(idx));
	cin>>n>>m;
	for (i=0;i<n;i++){
		cin>>x;
		A[x]+=1;
	}
	for (i=0;i<n;i++){
		idx[A[i]]=i;
	}
	sort(A,A+n);
	if (A[n-2]==A[n-3])
		cout<<"Waspada Koalisi"<<endl;
	else
		cout<<idx[A[n-2]]<<endl;
}
