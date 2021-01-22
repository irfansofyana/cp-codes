#include <bits/stdc++.h>
using namespace std;
int A[1000000];
int B[1000000];
int n,i,j;
void isitriangular(){
	for (i=1;i<=500;i++){
		A[i]=((i*(i+1))/2);
	}
}
void cek(){
	for (i=1;i<=500;i++){
		B[A[i]]=1;
	}
}
int main(){
	isitriangular();
	cek();
	cin>>n;
	if (B[n]!=0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
