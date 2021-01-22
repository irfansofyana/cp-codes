#include <bits/stdc++.h>
using namespace std;
int main(){
	int l,r;
	int jumlah=0;
	
	cin>>l>>r;
	while ((l!=0) || (r!=0)){
		jumlah=l+r;
		printf("%d\n",jumlah);
		jumlah=0;
		cin>>l>>r;
	}
	return 0;
}