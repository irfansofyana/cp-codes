#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long banyak,n,b,i;
	long long A[30000];
	long long jumlah=0;
	cin>>n>>b;
	for (i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	i=n-1;
	jumlah+=A[i];
	banyak=1;
	i=i-1;
	while (jumlah<b){
		jumlah+=A[i];
		i=i-1;
		banyak++;
	}
	cout<<banyak<<endl;
}
