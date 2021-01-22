#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,k,x;
	int A[1000];
	int j[1000];
	int min;
	
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>A[i];
	}
	memset(j,0,sizeof(j));
	for (i=1;i<=n;i++){
		for (k=1;k<=A[i];k++){
			cin>>x;
			j[i]+=x;
		}
	}
	for (i=1;i<=n;i++){
		if (i==1){
			min=5*(j[i])+15*A[i];
		}
		else if (5*(j[i])+15*A[i]<min)
			min=5*(j[i])+15*A[i];
	}
	cout<<min<<endl;
}
