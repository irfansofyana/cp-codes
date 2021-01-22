#include <bits/stdc++.h>
using namespace std;

long long B[100000],A[100000];
long long n,i,j,jumlah=0;

void isiarray(){
	A[0]=B[0]+B[1];
	A[1]=B[1]+B[2]+B[0]+B[4];
	A[2]=B[2]+B[3]+B[5]+B[1];
	A[3]=B[3]+B[2]+B[6];
	A[4]=B[4]+B[5]+B[1]+B[7];
	A[5]=B[5]+B[2]+B[4]+B[6]+B[8];
	A[6]=B[6]+B[9]+B[3]+B[5];
	A[7]=B[7]+B[8]+B[4];
	A[8]=B[8]+B[7]+B[9]+B[5];
	A[9]=B[9]+B[8]+B[6];
}
void simpan(){
	for (i=0;i<=9;i++)
		B[i]=A[i];
}
int main(){
	for (i=0;i<=9;i++)
		B[i]=1;
	scanf("%lld",&n);
	for (i=1;i<=n;i++){
		isiarray();
		memset(B,0,sizeof(B));
		simpan();
	}
	for (i=0;i<=9;i++)
		jumlah+=A[i];
	cout<<jumlah<<endl;
}
