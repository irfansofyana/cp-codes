#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int x,frek1=0,frek2=0;
	int m,k,banyak=0;
	
	cin>>n>>m>>k;
	for (i=0;i<n;i++){
		cin>>x;
		if (x=1)
			frek1++;
		else if (x==2)
			frek2++;
	}
	if (frek1>m){
		banyak=banyak+frek1-m;
	}
	if (frek2>k)
		banyak=banyak+frek2-k;
	cout<<banyak<<endl;
}
