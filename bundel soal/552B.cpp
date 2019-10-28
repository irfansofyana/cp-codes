#include <bits/stdc++.h>
using namespace std;

long long n,i,j,digit,ans;
long long banyak[15];
long long asal;

void isi(){
	long long temp=9;
	for (i=1;i<=9;i++) {
		banyak[i] = temp*i;
		temp*=10;
	}
}

long long pangkat(long long d) {
	long long result=1;
	for (int z=1;z<=d;z++) result*=10;
	return result;
}

int main() {
	cin.tie(0);
	isi();
	cin >> n;
	asal = n;
	while (n>0) {
		digit++;
		n/=10;
	}
	for (i=1;i<=digit-1;i++) ans+=banyak[i];
	ans+=(asal-pangkat(digit-1)+1)*digit;
	cout << ans << endl; 
}
