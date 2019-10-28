#include <bits/stdc++.h>
using namespace std;

long long n,i,j,t,awal;
long long banyak;
long long nilai;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	for (i=1;i<=t;i++){
		cixn>>n;
		j=2;
		awal=n;
		banyak=0; 
		nilai=1;
		while (n%j==0){
			banyak++;
			nilai=nilai*2;
			n=n/j;
		}
		if (awal/nilai==1) cout<<0<<" "<<banyak<<endl;
		else cout<<awal/nilai<<" "<<banyak<<endl;
	}
	return 0;
}