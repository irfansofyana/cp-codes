#include <bits/stdc++.h>
using namespace std;
int n,k,jumlah,j;
int temp;
int A[100010];

int main(){
	cin.tie(0);
	cin>>n>>k;
	j=0;
	jumlah=0;
	for (int i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n);
	int i=0;
	while (i<n){
		if (k>0){
			jumlah+=A[i]*(-1);
			i++;
			k--;
		}
		else if (k==0){
			jumlah+=A[i];
			i++;
		}
	}
	cout<<jumlah<<"\n";
}