#include <bits/stdc++.h>
using namespace std;

int n,i;
int A[5000];

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=0;i<n;i++){
		int temp;
		cin>>temp;
		A[temp]=1;
	}
	for (i=1;i<=5000;i++){
		if (A[i]==0) {
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
