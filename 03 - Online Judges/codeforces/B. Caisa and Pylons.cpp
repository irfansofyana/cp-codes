#include <bits/stdc++.h>
using namespace std;

long long n,i,j,temp;
long long jawaban;
double nilai;
double d[100010];

void isi(){
	d[1]=0.5;
	for (i=2;i<=100000;i++){
		d[i]=d[i-1]*(0.5);
	}
}
int main(){
	cin.tie(0);
	cin>>n;
	isi();
	nilai=0;
	for (i=1;i<=n;i++){
		cin>>temp;
		nilai=nilai+temp*d[i];
	}
	jawaban=ceil(nilai);
	cout<<jawaban<<endl;	
}
