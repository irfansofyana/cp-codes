#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int A[10000],B[10000];
	int tabungan;
	int sementara;
	
	cin>>n>>tabungan;
	sementara=tabungan;
	for (i=0;i<n;i++){
		cin>>A[i]>>B[i];
	}
	for (i=0;i<n;i++){
		if (double(B[i])>=double((tabungan))/2){
			tabungan=tabungan+B[i]+ceil((double(1)/100)*(tabungan+B[i]));
		}
		else
			tabungan=tabungan+B[i];
	}
	tabungan=tabungan+ceil((double(10)/100)*(sementara));
	cout<<tabungan<<endl;
}
