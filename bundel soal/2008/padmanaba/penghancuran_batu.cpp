#include <bits/stdc++.h>
using namespace std;
int ans,n,i,j;
int A[1010];
int hancur[1010];
int st,banyak;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=1;i<=n;i++) cin>>A[i];
	i=2;
	while (banyak!=n-1){
		while (i<=n-1){
			if (A[i-1]<=A[i+1] && A[i-1]>=A[i]){
				ans+=A[i-1];
				banyak--;
			}
			else 
		}
	}
}
