#include <bits/stdc++.h>
using namespace std;
int A[4];
int n,i,j;
int maks;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=0;i<n;i++){
		int temp;
		cin>>temp;
		A[temp-1]++;	
	}
	maks=A[0];
	for (i=1;i<3;i++){
		if (A[i]>maks){
			maks=A[i];	
		}
	}
	cout<<n-maks<<endl;
}
