#include <bits/stdc++.h>
using namespace std;
int n,i,j;
int banyak=0;

bool cekprima(int p){
	bool q;
	if (p<=1)
		return false;
	else{
		q=true;
		for (i=2;i<=int(sqrt(p));i++){
			if (p%i==0){
				q=false;
				break;
			}
		}
		return q;
	}
}
bool cek(int p){
	bool q=true;
	int banyak=0;
	for (i=2;i<=p;i++){
		if (p%i==0 && cekprima(i)){
			banyak++;
		}
		if (banyak>2){
			q=false;
			break;
		}
	}
	return q;	
}
int main(){
	int total=0;
	cin>>n;
	for (i=1;i<=n;i++){
		if (cek(i))
			total++;
	}
	cout<<total<<endl;
}
