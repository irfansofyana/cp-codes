#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,k,banyak=0,maks=0,x,y;
	bool p=true;
	
	cin>>x>>y;
	while (cin){
		n=x;
		while (n<=y){
			k=n;
			banyak++;
			while (k!=1){
				if (k%2==1)
					k=3*k+1;
				else
					k=k/2;
				banyak++;
			}
			if (banyak>maks)
				maks=banyak;
			n++;
			banyak=0;
		}
		cout<<maks<<endl;
		cin>>x>>y;
	}
}
