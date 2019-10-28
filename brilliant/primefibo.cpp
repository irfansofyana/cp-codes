#include <bits/stdc++.h>
using namespace std;

long long A[50],n,i,j;
long long sum = 0;

bool cekprima(long long k){
	long long it;
	if (k<=1) return false;
	if (k==2) return true;
	for (it=2;it<=static_cast<long long>(sqrt(k));it++){
		if (k%it==0) return false;
	}
	return true;
}
int main(){
	A[0]=0; A[1]=1;
	for (i=2;i<=44;i++){
		A[i]=A[i-1]+A[i-2];
		if (cekprima(A[i])) sum+=A[i];
	}
	cout << sum << endl;
}
