#include <bits/stdc++.h>
using namespace std;
long long set,n,i,price;
long long diskon[100],harga[100];
double akhir;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	memset(diskon,0,sizeof(diskon));
	memset(harga,0,sizeof(harga));
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>harga[i]>>diskon[i];
	}
	cin>>price;
	set=price;
	
}
