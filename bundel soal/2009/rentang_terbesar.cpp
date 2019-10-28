#include <bits/stdc++.h>
using namespace std;
int A[100010];
int t,n,i,j,sum;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	while (t--){
		memset(A,0,sizeof(A));
		cin>>n;
		for (i=0;i<n;i++) cin>>A[i];
		sort(A,A+n);
		if (A[0]!=1) cout<<0<<endl;
		else {
			i=0; sum=0;
			while (A[i+1]-A[i]==1 && i<n) {
				sum+=A[i]; i++;
			}
			sum+=A[i];
			if (A[i+1]-sum>=2) cout<<sum<<endl;
			else {
				cout<<A[i+1]+sum<<endl;
			} 
		}
	}
	return 0;
}
