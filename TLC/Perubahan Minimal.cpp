#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k,t;
	int A[100000];
	long long jumlah=0;
	scanf("%d",&t);
	for (i=0;i<t;i++){
		scanf("%d",&n);
		for (j=0;j<n;j++){
			scanf("%d",&A[j]);
		}
		sort(A,A+n);
		jumlah=0;
		for (j=0;j<n;j++){
			jumlah+=abs(A[j]-(j+1));
		}
		cout<<jumlah<<endl;
	}
}
