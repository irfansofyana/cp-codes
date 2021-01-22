#include <bits/stdc++.h>
using namespace std;

const long long m=1073741824;
long long  a,b,c,i,j,k;
long long jumlah;

long long banyak(long long p){
	long long z,banyak=0;
	for (z=1;z<=static_cast<long long>(sqrt(p));z++){
		if (p%z==0) {
			if (p!=z) banyak+=2;
			else banyak++;
		}
	}
	return banyak%m;
}

int main(){
	cin.tie(0);
	cin>>a>>b>>c;
	for (i=1;i<=a;i++){
		for (j=1;j<=b;j++){
			for (k=1;k<=c;k++){
				jumlah+=banyak(i*j*k);
			}
		}
	}
	cout<<jumlah%m<<endl;
	return 0;
}

