#include <bits/stdc++.h>
using namespace std;
int n,i,j;
int A[1000000];
int banyak;
void ngisi(){
	int i,j;
	j=1;
	for (i=1;i<=n;i++){
		if (n%i==0){
			A[j]=i;
			j++;
		}
	}
	banyak=j;
}

int main(){
	int k,idx,start;
	int B[10000];
	cin.tie(0);
	cin>>n;
	ngisi();
	start=banyak-1;
	k=start-1;
	idx=1;
	while (k>=1){
		if (A[start]%A[k]==0){
			B[idx]=A[start];
			idx++;
			start=k;
			k=k-1;
		}
		else if (A[start]%A[k]!=0){
			k=k-1;
		}
	}
	B[idx]=1;
	for (i=1;i<=idx;i++){
		if (i==idx) cout<<B[i]<<endl;
		else cout<<B[i]<<" ";
	}
	return 0;
}
