#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,i,j;
	int n,banyak;
	double rata;
	double jumlah=0;
	double A[100000];
	
	cin>>t;
	for (i=0;i<t;i++){
		cin>>n;
		banyak=0;
		jumlah=0;
		for (j=1;j<=n;j++){
			cin>>A[j];
			jumlah+=A[j];
		}
		rata=(jumlah/n);
		for (j=1;j<=n;j++)
			if (A[j]<rata)
				banyak++;
		cout<<banyak<<endl;
	}
}
