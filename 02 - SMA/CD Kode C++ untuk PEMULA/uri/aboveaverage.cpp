#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,k,j,b;
	int A[1000];
	int jumlah;
	double average,akhir;
	
	cin>>n;
	for (i=1;i<=n;i++){
		jumlah=0;
		b=0;
		cin>>k;
			for (j=1;j<=k;j++){
			cin>>A[j];
			jumlah=jumlah+A[j];
			}
		average=double(jumlah)/k;
			for (j=1;j<=k;j++){
				if (A[j]>average)
					b++;
			}
		akhir=(double(b)/k)*100;
		cout<<fixed<<showpoint<<setprecision(3);
		cout<<akhir<<"%"<<endl;
	}
	return 0;
}