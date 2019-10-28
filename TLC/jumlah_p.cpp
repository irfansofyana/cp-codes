#include <bits/stdc++.h>
using namespace std;
long long A[1000010];
long long n,i,j;
long long t;

long long f(long long a){
	long long temp;
	long long jawaban;
	temp=a%10;
	
	if (temp==0) jawaban=0;
	else if (temp==1) jawaban=1;
	else if (temp==2){
		if (a%4==1) jawaban=2;
		else if (a%4==2) jawaban=4;
		else if (a%4==3) jawaban=8;
		else if (a%4==0) jawaban=6;
	}
	else if (temp==3){
		if (a%4==1) jawaban=3;
		else if (a%4==2) jawaban=9;
		else if (a%4==3) jawaban=7;
		else if (a%4==0) jawaban=1;
	}
	else if (temp==4){
		if (a%2==1) jawaban=4;
		else jawaban=6;
	}
	else if (temp==5) jawaban=5;
	else if (temp==6) jawaban=6;
	else if (temp==7){
		if (a%4==1) jawaban=7;
		else if (a%4==2) jawaban=9;
		else if (a%4==3) jawaban=3;
		else if (a%4==0) jawaban=1;
	}
	else if (temp==8){
		if (a%4==1) jawaban=8;
		else if (a%4==2) jawaban=4;
		else if (a%4==3) jawaban=2;
		else if (a%4==0) jawaban=6;
	}
	else if (temp==9){
		if (a%2==1) jawaban=9;
		else jawaban=1;
	}
	return jawaban;
}
void isiarray(){
	A[1]=1;
	for (j=2;j<=1000010;j++){
		A[j]=(f(j)+A[j-1])%10;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	isiarray();
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>n;
		cout<<A[n]<<endl;
	}		
}
