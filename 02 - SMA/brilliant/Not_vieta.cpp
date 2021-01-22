#include <bits/stdc++.h>
using namespace std;

int i;

int jumlah_digit(int x){
	int ans=0;
	while (x>0){
		ans+=x%10;
		x/=10;
	}
	return ans;
}

int kali_digit(int x){
	int ans=1;
	while (x>0) {
		ans*=(x%10);
		x/=10;
	}
	return ans;
}

int main(){
	int banyak=0;
	for (i=11;i<=999;i++){
		if (6*kali_digit(i)+4*jumlah_digit(i)==4*i) banyak++;
	}
	cout << banyak << endl;
}
