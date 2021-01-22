#include <bits/stdc++.h>
using namespace std;

	int k,n,i,j,idx;
	int A[20],temp[20];
	int jawaban[20];
	
int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>A[i];
		temp[i]=A[i];
	}
	j=n-1;
	idx=1;
	jawaban[idx]=A[1];
	idx++;
	while (j>=1){
		k=j;
		while (k>=1){
			temp[k]=A[k+1]-A[k];
			k=k-1;
		}
		jawaban[idx]=temp[1];
		idx++;
		for (i=1;i<=j;i++) A[i]=temp[i];
		j=j-1;
	}
	for (i=1;i<idx;i++){
		if (i==idx-1) cout<<jawaban[i]<<endl;
		else cout<<jawaban[i]<<" ";
	}
}
