#include <bits/stdc++.h>
using namespace std;
int n,i,j;
bool cek=true;
int A[100010],B[100010],C[100010];
int main(){
	cin>>n;
	for (i=0;i<n;i++) cin>>A[i];
	for (i=0;i<n-1;i++) cin>>B[i];
	for (i=0;i<n-2;i++) cin>>C[i];
	sort(A,A+n);
	sort(B,B+n-1);
	sort(C,C+n-2);
	for (i=0;i<=n-2;i++){
		if (B[i]!=A[i]){
			cek=false;
			cout<<A[i]<<endl;
			break;
		}
	}
	if (cek) {
		cout<<A[n-1]<<endl;
	}
	cek=true;
	for (i=0;i<=n-3;i++){
		if (C[i]!=B[i]){
			cek=false;
			cout<<B[i]<<endl;
			break;
		}
	}
	if (cek){
		cout<<B[n-2]<<endl;
	}
	return 0;
}
