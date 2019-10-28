#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int jumlah=0;
int mulai;

int main(){
	cin>>n;
	mulai=1;
	jumlah=1;
	while (jumlah<=n){
		mulai++;
		jumlah+=(mulai*(mulai+1))/2;
	}
	cout<<mulai-1<<endl;
}
