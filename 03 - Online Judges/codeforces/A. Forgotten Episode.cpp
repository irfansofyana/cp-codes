#include <bits/stdc++.h>
using namespace std;
int n,i,j;
int A[100010];
int main(){
	cin.tie(0);
	cin>>n;
	for (i=0;i<n-1;i++){
		int temp;
		cin>>temp;
		A[temp]=1;
	}
	for (i=1;i<=n;i++){
		if (A[i]==0) {
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
