#include <bits/stdc++.h>
using namespace std;
int n,i,j,k,m,sum,idx,asal,q,banyak;
int A[1000100];
int B[1000100],tanya[1000100];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n; sum=0;
	for (i=0;i<n;i++) {
		cin>>A[i];
		sum+=A[i];
	} idx=0; asal=1; banyak=A[idx];
	for (i=1;i<=sum;i++){
		if (banyak!=0) {
			B[i]=asal;
			banyak--;
		}
		else if (banyak==0){
			idx++; banyak=A[idx]; asal++;
			B[i]=asal;
			banyak--;
		}
	}
	cin>>m;
	for (i=1;i<=m;i++){
		cin>>tanya[i];
	}
	for (i=1;i<=m;i++) cout<<B[tanya[i]]<<endl;
}
