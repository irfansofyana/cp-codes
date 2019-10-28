#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int banyak=0;
	
	cin>>n;
	while (5<=n){
		n=n/5;
		banyak+=n;
	}
	printf("%d\n",banyak);
	return 0;
}