#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,j;
	long long A[1000];
	long long maks=0;
	long long nilai;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
	}
	for (i=0;i<n-1;i++){
		maks=0;
		nilai=A[i];
		j=i+1;
		while (j<n){
			nilai=nilai^A[j];
			j++;	
		}
		if 	(nilai>maks)
			maks=nilai;
	}
	cout<<maks<<endl;
}
