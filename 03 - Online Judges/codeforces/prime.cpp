#include <bits/stdc++.h>
using namespace std;

int n,i,j;
long long bil,temp;

bool cekprima(int p){
	int j; bool cek=true;
	if (p<=1) cek=false;
	for (j=2;j<=static_cast<long long>(sqrt(p));j++){
		if (p%j==0){
			cek=false;
			break;
		}
	}
	return cek;
}
int main(){
	cin.tie(0);
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>bil;
		temp=static_cast<long long>(sqrt(bil));
		if (temp*temp==bil && temp%2==1){
			if (cekprima(temp)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else if (temp*temp==bil && temp==2) cout<<"YES"<<endl;
		else if (temp*temp==bil && temp%2==0) cout<<"NO"<<endl;
		else cout<<"NO"<<endl;
	}
}
