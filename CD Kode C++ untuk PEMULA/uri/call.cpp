#include <bits/stdc++.h>
using namespace std;
long long fibo(int n){
	int banyak=0;
	banyak++;
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
int main(){
	int banyak;
	int p,i,k;
	
	cin>>p;
	for (i=1;i<=p;i++){
		scanf("%d",&k);
		fibo(k);
		printf("fib(%d) = %d calls = %lld",k,banyak-1,fibo(k));
	}
	return 0;
}