#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,j,temp;
	long long A[5000],min;
	long long banyak=0;
	long long jawaban1[5000],jawaban2[5000];
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
	}
	for (i=0;i<n-1;i++){
		min=i;
		for (j=i+1;j<n;j++){
			if (A[j]<A[min]){
				min=j;
			}
		}
		if (min!=i){
		temp=A[min];
		A[min]=A[i];
		A[i]=temp;
		jawaban1[banyak]=i;
		jawaban2[banyak]=min;
		banyak++;
		}
	}
	cout<<banyak<<endl;
	for (i=0;i<banyak;i++){
		cout<<jawaban1[i]<<" "<<jawaban2[i]<<endl;
	}
}
