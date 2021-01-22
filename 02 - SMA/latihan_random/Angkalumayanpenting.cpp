#include <bits/stdc++.h>
using namespace std;
int n,i,m;
int banyak;
int main(){
	int t;
	scanf("%d",&t);
	for (int j=1;j<=t;j++){
	scanf("%d %d",&n,&m);
	i=10;
	banyak=0;
	n=n*m;
	while (n%i==0){
		banyak++;
		n=n/i;
	}
	printf("%d\n",banyak);
	}
	return 0;	
}
