#include <bits/stdc++.h>
using namespace std;

int m,n,i,j;
string a,b;
bool cekprima(int p){
	int i;
	bool cek=true;
	if (p<=1) return false;
	else{
	for (i=2;i<=int(sqrt(p));i++){
		if (p%i==0){
			cek=false;
			break;
		}
	}
	return cek;
	}
}
string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
int ngubah(string s){
	stringstream ss(s);
	int result;
	return ss>>result ? result:0;
}
int main(){
	bool ada=false;
	cin.tie(0);
	cin>>m>>n;
	for (i=m;i<=n;i++){
		for (j=m;j<=i+50;j++){
			if (j>=m && j<=n){
				a=ubah(i);
				b=ubah(j);
				a=a+b;
				if (cekprima(ngubah(a)) && (cekprima(i) && cekprima(j))){
					cout<<i<<" "<<j<<endl;
					ada=true;	
				}
			}
		}
	}
	if (!ada) cout<<"TIDAK ADA"<<endl;
	return 0;
}
