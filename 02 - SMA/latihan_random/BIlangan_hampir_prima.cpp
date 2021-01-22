#include <bits/stdc++.h>
using namespace std;
int t,n,i,j,a,b;
int banyak;
int temp; 
bool cekprima(int a){
	bool nilai=true;
	if (a<=1) return false;
	else{
		for (i=2;i<=int(sqrt(a));i++){
			if (a%i==0){
				nilai=false;
				break;
			} 
		}
		return nilai;
	}	
}
bool periksa(int a){
	bool q=true;
	for (i=2;i<=int(sqrt(a));i++){
		if (a%i==0){
			temp=a/i;
			if (!(cekprima(i) && cekprima(temp))) q=false;
		}
		if (!q) break;
	}
	return q;
}
int main(){
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>a>>b;
		banyak=0;
		for (j=a;j<=b;j++){
			if (periksa(j)) banyak++;
		}
		cout<<banyak<<endl;
	}
}
