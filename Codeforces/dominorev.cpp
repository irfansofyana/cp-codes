#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int A[1000],B[1000];
	int n,sementara,i,j,temp,jumlahA=0,jumlahB=0,banyak;
	bool ditemukan=false;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i]>>B[i];
		jumlahA+=A[i];
		jumlahB+=B[i];
	}
	i=0;
	if ((jumlahA%2==0) && (jumlahB%2==0))
		banyak=0;
	else{
	while ((i<n) && (!ditemukan)){
		temp=A[i];
		sementara=B[i];
		A[i]=B[i];
		B[i]=temp;
		if (((jumlahA-temp+A[i])%2==0)&&(jumlahB-sementara+B[i])%2==0){
			banyak=1;
			ditemukan=true;
		}
		else
		i++;
	} 
	if (ditemukan==false)
		banyak=-1;
	}
	cout<<banyak<<endl;
}
