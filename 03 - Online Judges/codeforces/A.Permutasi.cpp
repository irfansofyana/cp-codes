#include <bits/stdc++.h>
using namespace std;
int n,i,j,temp;
int A[1000];
bool cek;

int main(){
	cin.tie(0);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
	}	
	i=0; cek=true;
	while (i<n-2){
		if (A[i]!=A[i+1] && A[i+1]==A[i+2]){
			temp=A[i];
			A[i]=A[i+1];
			A[i+1]=temp;
			i++;
		}
		else if (A[i]==A[i+1] && A[i+1]!=A[i+2]){
			temp=A[i+1];
			A[i+1]=A[i+2];
			A[i+2]=temp;
			i++;
		}
		else if (A[i]==A[i+1] && A[i+1]==A[i+2]){
			if (i==0) cek=false;
		}
	}
}
