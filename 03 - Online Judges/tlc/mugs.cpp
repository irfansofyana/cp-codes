#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,s;
	int i;
	int jumlah=0;
	int A[1000];
	
	cin>>n>>s;
	for (i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n);
	for (i=0;i<n-1;i++){
		jumlah+=A[i];
	}
	if (jumlah<=s)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
