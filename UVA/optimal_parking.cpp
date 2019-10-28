	#include <bits/stdc++.h>
	using  namespace std;
	int t,n,i,j;
	int A[10000];
	
	int main(){
		cin.tie(0); ios_base::sync_with_stdio(0);
		cin>>t;
		while (t--){
			memset(A,0,sizeof(A));
			cin>>n;
			for (i=0;i<n;i++) cin>>A[i];
			sort(A,A+n); int ans=0;
	 		for (i=0;i<n-1;i++){
				ans+=A[i+1]-A[i];
			}
			cout<<2*ans<<endl;
		}
	}
