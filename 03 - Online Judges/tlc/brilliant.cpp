#include <bits/stdc++.h>
using namespace std;

long long hasil,n,i,j;
long long A[10000];

void ngisi(){
	long long i;
	A[1]=1;
	for (i=2;i<=1001;i++){
		A[i]=(i*A[i-1]+1)%100;
	}
}

int main(){
	cin.tie(0);
	ngisi();
	for (i=2;i<=1000;i++){
		if (A[i]==0){
			cout<<i<<endl;
		}
	}
	return 0;
}
