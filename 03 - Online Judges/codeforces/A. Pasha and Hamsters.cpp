#include <bits/stdc++.h>
using namespace std;
int n,a,b;
int A[1000];
int temp;

int main(){
	cin.tie(0);
	cin>>n>>a>>b;
	for (int i=1;i<=a;i++){
		cin>>temp;
		A[temp]=1;
	}
	for (int i=1;i<=b;i++){
		cin>>temp;
		if (A[temp]!=1) A[temp]=2;
	}
	for (int i=1;i<=n;i++){
		if (i==n) cout<<A[i]<<endl;
		else cout<<A[i]<<" ";
	}
	return 0;
}
