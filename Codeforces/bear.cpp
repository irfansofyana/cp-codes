#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,c,i;
	int k;
	int A[1000],maks;
	
	cin>>n>>c;
	for (i=0;i<n;i++)
		cin>>A[i];
	for (i=0;i<n-1;i++){
		if (i==0){
			maks=A[i]-A[i+1]-c;
		}
		else{
		k=A[i]-A[i+1]-c;
			if (k>maks){
				maks=k;
			}
		}
	}
	if (maks<0)
		cout<<0<<endl;
	else
		cout<<maks<<endl;
}