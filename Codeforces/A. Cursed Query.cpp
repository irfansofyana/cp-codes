#include <bits/stdc++.h>
using namespace std;

long long n,i,j,A[100010];
long long t,temp,q;
long long B[100010];
int main(){
	cin.tie(0);
	cin>>n>>q;
	for (i=0;i<n;i++) cin>>A[i];
	for (i=0;i<n;i++){
		if (i==0){
			temp=A[i]-1;
			for (j=0;j<temp;j++) B[j]++;
		}
		else{
			for (j=A[i-1];j<A[i];j++) B[j]++;
		}
	}
	for (i=0;i<q;i++){
		cin>>temp;
		cout<<B[temp]<<endl;
	}
}
