#include <bits/stdc++.h>
using namespace std;
int main(){
	int banyak=0,temp,n,i,j,min,jum=0,jumlah=0;
	int A[101];
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
		jumlah=jumlah+A[i];
	}
	sort(A,A+n);
	j=n-1;
	while ((j>=0) && (jum<=jumlah-jum))
		{
			jum=jum+A[j];
			banyak++;
			j=j-1;
		}
	printf("%d\n",banyak);
}