#include <bits/stdc++.h>
using namespace std;

long long a,b;
long long banyak;
int nilai1,nilai2;

int interval(long long p){
	if (p>=1 && p<=9) return 1;
	else if (p>=10 && p<=99) return 2;
	else if (p>=100 && p<=999) return 3;
	else if (p>=1000 && p<=9999) return 4;
	else if (p>=100000 && p<=99999) return 5;
	else if (p>=1000000 && p<=999999) return 6;
	else if (p>=10000000 && p<=9999999) return 7;
}
int pangkat2(int x){
	int hasil=1;
	for (int i=1;i<=x;i++){
		hasil=hasil*10;
	}
	return hasil;
}
int result(int p){
	if (p==1) return 9;
	else if (p==2) return 99;
	else if (p==3) return 999;
	else if (p==4) return 9999;
	else if (p==5) return 99999;
	else if (p==6) return 999999;
	else if (p==7) return 9999999;
}
int main(){
	cin.tie(0);
	cin>>a>>b;
	nilai1=interval(a); 
	nilai2=interval(b); 
	for (int i=nilai1;i<=nilai2;i++){
		if (i==nilai1){
			banyak+=(result(i)-a+1)*i;
		}
		else if (i==nilai2){
			banyak+=(b-(pangkat2(i-1))+1)*i;
		}
		else banyak+=(9*pangkat2(i-1))*i;
	}
	cout<<banyak<<endl;
}
