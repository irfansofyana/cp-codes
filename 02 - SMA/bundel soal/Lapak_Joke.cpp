#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[110];
int k,ans;

int main() {
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++)
		scanf("%d",&A[i]);
	scanf("%d",&k);
	sort(A,A+n);
	if (k<=n) {
		for (i=0;i<k;i++) 
			ans+=A[i]; 
	}
	else {
		for (i=0;i<n;i++)
			ans+=A[i];
		for (i=0;i<k-n;i++) 
			ans-=m;
	}
	if (ans>=0) cout<<ans<<endl;
	else puts("Joke Rapopo");
}
