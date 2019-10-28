#include <bits/stdc++.h>
using namespace std;

long int n,i,j;
long int bil;

long int ubah_basis(long int n,long int k){
	long int result=0;
	while (n>0) {
		result+=(n%k);
		n/=k;
	}
	return result;
}

long int fpb(long int a,long int b){
	if (b==0) return a;
	else return fpb(b,a%b);
}
int main(){
	cin >> n;
	bil = n;
	for (i=2;i<=n-1;i++) {
		j+=ubah_basis(bil,i);	
	}
	cout << (j/fpb(j,n-2)) <<'/' << (n-2)/fpb(n-2,j) << endl;
}
