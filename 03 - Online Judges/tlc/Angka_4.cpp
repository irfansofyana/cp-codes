#include <bits/stdc++.h>
using namespace std;

int a,b,i,j;
int jawab=0;
bool cekkomposit(int p){
	bool cek=false;
	int banyak=0,i;
	for (i=1;i<=p;i++){
		if (p%i==0)
			banyak++;
		if (banyak>2){
			cek=true;
			break;
		}
	}
	return cek;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin>>a>>b;
	jawab=0;
	for (j=a;j<=b;j++){
		if (cekkomposit(j))
			jawab++;
	}
	cout<<jawab<<endl;
}
