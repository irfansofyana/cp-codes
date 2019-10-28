#include <bits/stdc++.h>
using namespace std;
int A[100];
int n,m,i,j;
int mulai,hutang;
int main(){
	for (i=1;i<=5;i++) cin>>A[i];
	for (i=10;i>=6;i--) cin>>A[i];
	cin>>n>>m;
	if (n==1){
		mulai=m+1;
		hutang=A[m];
		A[m]=0;
	}
	else if (n==2){
		mulai=m+6;
		hutang=A[m+5];
		A[m+5]=0;
	}
	while (hutang!=0){
		if (mulai>10) mulai=1;
		A[mulai]++;
		hutang--;
		mulai++;
	}
	for (i=1;i<=5;i++){
		if (i==5) cout<<A[i]<<endl;
		else cout<<A[i]<<" ";
	}
	for (i=10;i>=6;i--){
		if (i==6) cout<<A[i]<<endl;
		else cout<<A[i]<<" ";
	}
}
