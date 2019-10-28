#include <bits/stdc++.h>
using namespace std;

int n,d,i,j;
int A[1005];
int ans;

int main(){
	scanf("%d%d",&n,&d);
	for (i=0;i<n;i++)
		scanf("%d",&A[i]);
	for (i=0;i<n;i++) {
		for (j=i+1;j<n;j++)
			if (abs(A[i]-A[j])<=d) ans+=2; 
	}
	cout << ans << endl;
	return 0;
}
