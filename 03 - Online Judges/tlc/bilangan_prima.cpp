#include <bits/stdc++.h>
using namespace std;

bool cekprima(int p){
	int j;
	bool l=true;
	if (p<=1) l=false;
	else{
		l=true;
		for (j=2;j<=int(sqrt(p));j++){
			if (p%j==0){
				l=false;
				break;
			}
		}
	}
	return l;	
}
int main(){
	int jumlah,banyak;
	int n,i,j;
	int x;
	int A[1000];
	cin>>n;
	for (i=1;i<=n;i++){
		jumlah=0;
		cin>>banyak;
		for (j=0;j<banyak;j++){
			cin>>A[j];
		}
		sort(A,A+banyak);
		j=1;
		if (cekprima(A[0]))
			jumlah+=A[0];
		while (j<banyak){
			if (A[j-1]==A[j]){
				j++;
			}
			else if (cekprima(A[j])){
				jumlah+=A[j];
				j++;
			}
			else
				j++;
		}
		cout<<"Case #"<<i<<": "<<jumlah<<endl;
	}
}
