#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,j,banyak=0;
	long long A[1500];
	bool p=false;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	i=0;
	while (i<n-2){
		if ((A[i]==A[i+1]) && (A[i+1]!=A[i+2])){
			p=true;
			banyak++;
			i=i+2;
		}
		else
		i++;
	} 
	if ((p==false) && (n>1))
		banyak=-1;
		
	cout<<banyak<<endl;
}