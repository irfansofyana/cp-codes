#include <bits/stdc++.h>
using namespace std;

int n,i,jumlah;
int h,uh,temp,maks;
string s,pemenang;

int main(){
	cin.tie(0);
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>s; jumlah=0;
		cin>>h>>uh;
		jumlah+=100*h-50*uh;
		for (int j=1;j<=5;j++){
			cin>>temp;
			jumlah+=temp;
		}
		if (i==1){
			maks=jumlah;
			pemenang=s;
		}
		else{
			if (jumlah>maks){
				maks=jumlah;
				pemenang=s;
			}  
		}
	}
	cout<<pemenang<<endl;
	return 0;
}
