#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

long long fibo[100];
long long ans,i,j,temp;

bool cek(long long k){
	while (k%10==0 && k>0) {
		k/=10;
	}
	if (k==1) return true;
	return false;
}
int main() {
	fibo[0]=0;
	fibo[1]=1;
	for (i=2;i;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
		if (fibo[i]>INF) {
			j=i-1;
			break;
		}
	}
	for (i=0;i<=j;i++){
		if (cek(fibo[i])) ans+=fibo[i];
	}
	cout << ans << endl;
}
