#include <bits/stdc++.h>
using namespace std;
int t,n,i;
int A[1000];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t; int idx=1;
	while (t--){
		cin>>n;
		for (i=0;i<n;i++) cin>>A[i];
		sort(A,A+n); cout<<"Case "<<idx<<": "<<A[n-1]<<endl;
		idx++;
	}
	return 0;
}
