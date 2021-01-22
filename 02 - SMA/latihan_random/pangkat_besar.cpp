#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
long long m;

long long sqr(long long a){
	return a*a;
}

long long pangkat(long long p,long long q){
	if (q==0) return 1;
	else if (q==1) return p%1000000;
	else if (q%2==1) return (p*sqr(pangkat(p,q/2)))%1000000;
	else if (q%2==0) return (sqr(pangkat(p,q/2)))%1000000;
}

int main(){
	cin.tie(0);
	cin>>n>>m;
	cout<<pangkat(n,m)<<endl;
	return 0;
}
