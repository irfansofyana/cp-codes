#include <bits/stdc++.h>
using namespace std;

void cetak(int p){
	int i;
	for (i=0;i<p;i++){
		cout<<"$";
	}
	cout<<endl;
}
int main(){
	int n,i,j;
	int A[1000];
	
	cin>>n;
	if (n%2==1){
		A[0]=1;
		A[n-1]=2;
		for (i=1;i<=(n/2);i++)
			A[i]=A[i-1]+2;
		for (i=(n/2)+1;i<n-1;i++)
			A[i]=2+2*(n-1-i);
		for (i=0;i<n;i++){
			cetak(A[i]);
		}
	}
	else if (n%2==0){
		A[0]=2;
		A[n-1]=1;
		for (i=n-2;i>=(n/2);i--){
			A[i]=A[0]+A[i+1];
		}
		
		for (i=1;i<=(n/2)-1;i++){
			A[i]=A[n-1]+A[n-1-i];
		}
		for (i=0;i<n;i++){
			cetak(A[i]);
		}
	}
	return 0;
}
