#include <bits/stdc++.h>
using namespace std;
long long m,n,i,j,maks,banyak;
long long kecil,besar;
long long A[1000001];
void ubah(long long k){
	if (k!=1){
		if (k%2==0){
			banyak++;
			ubah(k/2);
		}
		else {
			banyak++;
			ubah(3*k+1);
		}
	}
	else banyak++;
}
int main(){
	for (i=1;i<=1000000;i++){
		banyak=0;
		ubah(i);
		A[i]=banyak;
	}
	while (scanf("%lld %lld",&kecil,&besar)){
		for (j=kecil;j<=besar;j++){
			if (j==kecil) maks=A[j];
			else {
				if (A[j]>maks) maks=A[j];
			}
		}
		printf("%lld %lld %lld\n",kecil,besar,maks);
	} 
	return 0;
}
