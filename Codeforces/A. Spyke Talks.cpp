#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,banyak=0;
	long long A[1000],B[1000];
	bool p=true;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n);
	i=0;
	p=true;
	while ((i<n-1) && (p)){
		if ((A[i]==A[i+1]) && A[i]!=0){
				if (A[i+1]==A[i+2])
					p=false;
				else{
					banyak++;
					i=i+2;
				}
		}
		else if (A[i]==A[i+1] && (A[i]==0))
			i=i+2;
		else if (A[i]!=A[i+1])
			i++;
	}	
	if (p==false)
		banyak=-1;
	cout<<banyak<<endl;
}
