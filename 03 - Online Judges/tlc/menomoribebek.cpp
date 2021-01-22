#include <bits/stdc++.h>
using namespace std;

long long a,b,nilai1,nilai2;
long long banyak;
long long result[]={9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999};
long long pangkat2[]={10,100,1000,10000,100000,1000000,10000000,100000000,100000000,10000000000};
long long interval(long long p){
	if (p>=1 && p<=9) return 1;
	else if (p>=10 && p<=99) return 2;
	else if (p>=100 && p<=999) return 3;
	else if (p>=1000 && p<=9999) return 4;
	else if (p>=10000 && p<=99999) return 5;
	else if (p>=100000 && p<=999999) return 6;
	else if (p>=1000000 && p<=9999999) return 7;
	else if (p>=10000000 && p<=99999999) return 8;
	else if (p>=100000000 && p<=999999999) return 9;
	else if (p>=1000000000 && p<=9999999999) return 10;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>a>>b;
	nilai1=interval(a); 
	nilai2=interval(b);
	if (nilai1==nilai2){
		banyak=(b-a+1)*nilai1;		
	} 
	else{
		for (long long i=nilai1;i<=nilai2;i++){
			if (i==nilai1){
				banyak+=(result[i-1]-a+1)*i;
			}
			else if (i==nilai2) {
				banyak+=(b-(pangkat2[i-2])+1)*i; 
			}
			else{
				banyak+=(9*pangkat2[i-2])*i; 
			} 
		}
	}
	cout<<banyak<<endl;
	return 0;
}
