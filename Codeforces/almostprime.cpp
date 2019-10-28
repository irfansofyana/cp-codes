#include <bits/stdc++.h>
using namespace std;

bool cekprima(int x){
	bool y;
	int k;
	if (x<=1)
		y=false;
	else{
		y=true;
		k=2;
		while (k<=int(sqrt(x)) && y){
			if (x%k==0){
				y=false;
			}
			else
			k++;
		}
	}
	return y;
}

int main(){
	int total=0;
	int n,i,j,banyak=0;
	bool cek=true;
	cin>>n;
	for (i=1;i<=n;i++){
		if (cekprima(i)==false){
			banyak=0;
			cek=true;
			for (j=1;j<=i;j++){
				if ((i%j)==0){
					if (cekprima(j))
						banyak+=1;
				}
				if (banyak>2){
					cek=false;
					break;
				}
			}
			if (banyak<2)
				cek=false;
			else if (banyak==2)
				cek=true;
			if (cek)
				total++;
		}
	}
	cout<<total<<endl;
}
