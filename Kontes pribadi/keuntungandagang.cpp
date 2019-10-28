#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,i,penghasilan;
	int A[101],jumlah[101];
	
	jumlah[0]=0;
	cin>>n>>m;
	for (i=1;i<=n;i++){
		scanf("%d",&A[i]);
		jumlah[i]=jumlah[i-1]+A[i];
	}
	scanf("%d",k);
	
	if (k<n){
		penghasilan=jumlah[k];
		printf("%d\n",penghasilan);
		}
	else if (k=n){
		penghasilan=jumlah[n];
		printf("%d\n",penghasilan);
		}
	else if (k>n){
		penghasilan=(jumlah[n]-(m*(k-n)));
			if (penghasilan<0)
				cout<<"Pak Dengklek Rapopo"<<endl;
			else if (penghasilan>=0)
				cout<<penghasilan<<endl;
	}
	printf("%d\n",k);
	
	return 0;
}
