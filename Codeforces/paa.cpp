#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,i;
	int x,banyak=0,frek1=0,frek2=0;
	
	cin>>n>>m>>k;
	for (i=0;i<n;i++){
		cin>>x;
		if (x==1)
			frek1++;
		else if (x==2)
			frek2++;
	}
	if (frek1>frek2){
		if (m>k){
			if (frek1>m)
				banyak=banyak+frek1-m;
			if (m+k-frek1<frek2)
				banyak=banyak+frek2-(m+k-frek1);
		}
		else if (m<k){
			if (frek1>m)
				banyak=banyak+frek1-m;
			if (m+k-frek1<frek2)
				banyak=banyak+frek2-(m+k-frek1);
		}
	}
	else if (frek2>frek1){
		if (m>k){
			if (frek1>m)
				banyak=banyak+frek1-m;
			if (m+k-frek1<frek2)
				banyak=banyak+frek2-(m+k-frek1);
		}
		else if (m<k){
				if (frek1>m)
				banyak=banyak+frek1-m;
			if (m+k-frek1<frek2)
				banyak=banyak+frek2-(m+k-frek1);
		}
	}
	cout<<banyak<<endl;
}
