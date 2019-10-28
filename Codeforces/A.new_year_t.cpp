#include <bits/stdc++.h>
using namespace std;

int n,t,i,j,temp;
int A[50000];
int B[50000];

int main(){
	memset(B,0,sizeof(B));
	cin>>n>>t;
	for (i=1;i<=n-1;i++){
		cin>>A[i];
		if (i==1){
			temp=A[i]+i;
			B[temp]=1;
		}
		else{
			if (i==temp){
				B[A[i]+i]=1;
				temp=A[i]+i;	
			}
		}
	}
	if (B[t]==0) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
