#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,j;
	long long A[1000],B[1000];
	long long jumlahx,jumlahy;
		
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i]>>B[i];
	}
	sort(A,A+n);
	sort(B,B+n);
	jumlahx=A[n-1]-A[0];
	jumlahy=B[n-1]-B[0];
	if (jumlahx>=jumlahy)
		cout<<jumlahx*jumlahx<<endl;
	else
		cout<<jumlahy*jumlahy<<endl;
}
