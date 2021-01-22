#include <bits/stdc++.h>
using namespace std;
int A[100],n,i,j,idx;
int banyak;
bool cekprima(int x){
	if (x<=1) return false;
	for (int j=2;j<=int(sqrt(x));j++){
		if (x%j==0) return false;
	}
	return true;
}
int main(){
	idx=1;
	for (i=1;i<=100;i++){
		if (cekprima(i)) {
			A[idx]=i;idx++;
		}
	}
	cout<<idx<<endl;
//	for (i=1;i<idx;i++) cout<<A[i]<<endl;
	for (i=1;i<=idx-1;i++){
		for (j=i;j<=idx-1;j++){
			if (A[i]*A[j]<=100) banyak++;
		}
	}
	cout<<banyak<<endl;
}
