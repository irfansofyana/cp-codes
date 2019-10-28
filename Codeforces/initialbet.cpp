#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int A[100];
	int jumlah=0;
	
	for (i=0;i<5;i++){
		cin>>A[i];
		jumlah+=A[i];
	}
	if ((jumlah%5!=0) || (jumlah==0))
		printf("-1\n");
	else 
		printf("%d\n",jumlah/5);
	return 0;
}