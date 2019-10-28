#include <bits/stdc++.h>
using namespace std;

int i;

int jumlah_digit(int k){
	int ans=0;
	while (k>0){
		ans+=(k%10);
		k/=10;
	}
	return ans;
}

int main(){
	i=2;
	while (jumlah_digit(i)<=jumlah_digit(i*i*i)) i++;
	cout<<i<<endl;	
}
