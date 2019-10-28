#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,min,i,idx;
	long long A[100000];
	long long B[100000];
	bool p=false;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
		B[i]=A[i];
	}
	sort(A,A+n);
	if (A[0]==A[1]){
		cout<<"Still Rozdil"<<endl;
	}
	else 
		{
			long long j=0;
			while ((j<n)&&(!p)){
				if (B[j]==A[0]){
					idx=j;
					p=true;
				}
				else
				j++;
			}
			cout<<idx+1<<endl;
		}
}
