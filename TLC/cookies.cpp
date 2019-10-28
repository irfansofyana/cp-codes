#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,genap=0,ganjil=0;
	int jumlah=0,banyak=0;
	int x;
	
	cin>>n;
	for (i=0;i<n;i++)
		{
			cin>>x;
			jumlah+=x;
			if (x%2==0)
				genap++;
			else if (x%2==1)
				ganjil++;
		}
	if (jumlah%2==1){
		banyak=ganjil;
	}
	else if (jumlah%2==0){
		if (jumlah==0)
			banyak=0;
		else 
			banyak=genap;
	}
	cout<<banyak<<endl;
}
