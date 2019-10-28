#include <bits/stdc++.h>
using namespace std;
int t,n,i;
int A[100];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t; int idx=1;
	while (t--){
		cin>>n; int naik=0,turun=0;
		for (i=1;i<=n;i++) cin>>A[i];
		for (i=1;i<=n-1;i++){
			if (A[i]<A[i+1]) naik++;
			else if (A[i]>A[i+1]) turun++;
		}
		cout<<"Case "<<idx<<": "<<naik<<" "<<turun<<endl;
		idx++;
	}
	return 0;
}
