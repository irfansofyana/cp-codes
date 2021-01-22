#include <bits/stdc++.h>
using namespace std;
int k,banyak,back;
long long n,bil,temp;

void mencari(long long n){
	temp=1;
	for (int i=1;i<=18;i++){
		temp*=10;
		if (temp>n) {
			break;
		}
	}
}
int main(){
	scanf("%d",&k);
	scanf("%lld",&n);
	mencari(n);
	bil=2*n;
	//printf("%lld\n",temp);
	back=2; banyak=1;
	while (bil%temp!=n){
		back++;
		if (bil>temp) banyak++;
		bil=bil%temp+n;
	}
	printf("%d %d\n",back,banyak);
}
