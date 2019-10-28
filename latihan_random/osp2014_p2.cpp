#include <bits/stdc++.h>
#define irfan using
#define sofyana namespace
#define putra std

irfan sofyana putra;
int A[100000];
int i,n;
int idx,mulai;

void isiarray(){
	int i;
	mulai=1;
	idx=1;
	for (i=1;i<=100000;i++){
		A[i]=idx;
		if (mulai==idx){
			idx++; mulai=1;
		}
		else mulai++;
	}
}	
int main(){
	isiarray();
	cin>>n;
	cout<<A[n]<<endl;
}
