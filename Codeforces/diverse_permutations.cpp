#include<iostream>
using namespace std;

int main(){
	int n,k;
	
	cin>>n>>k;
	
	int l=1,r=k+1;
	
	while(l<r){
		cout<<l<<" "<<r<<" ";
		l++;
		r--;
	}
	if(l==r) cout<<l<<" ";
	
	for(int i=k+2;i<=n;i++) cout<<i<<" ";
}
