#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,banyak=0,salah;
	int A[2001];
	
	cin>>n;
	salah=n-1;
	int benar;
	benar=0;
	while (benar<n){
		banyak=banyak+salah+benar;
		salah=salah-1;
		benar=benar+1;
	
	}
	printf("%d\n",banyak+1);
	return 0;
}