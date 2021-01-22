#include <bits/stdc++.h>
using namespace std;
int n,i;
int A[1000];

int main(){
	cin>>n;
	for (i=0;i<n;i++) cin>>A[i];
	sort(A,A+n);
	cout<<A[n-1]<<endl;
}
