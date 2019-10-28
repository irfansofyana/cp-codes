#include <bits/stdc++.h>
using namespace std;

int n,i,j,temp;
int A[100005];

int main(){
	scanf("%d",&n);
	for (i=0;i<n-2;i++) {
		scanf("%d",&temp);
		A[temp] = 1;
	}
	for (i=1;i<=n;i++) {
		if (A[i]==0) cout<<i<<endl;
	}
	return 0;
}
