#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long x,y,k,n;
	long long i,j;
	long long jumlah;
	bool p=false;
	
	cin>>y>>k>>n;
	for (i=1;i<=(n/k);i++){
		jumlah=k*i;
		if (jumlah-y>=1){
			cout<<jumlah-y<<" ";
			p=true;
		}
	}
	if (p==false)
		cout<<-1<<endl;
	else
		cout<<endl;
}
