#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,x;
	int frek1=0,frek2=0;
	int i,banyak=0,sisa;
	int A[1000];
	
	cin>>n>>m>>k;
	i=0;
	while (i<n){
		cin>>A[i];
		if (A[i]==1)
			frek1++;
		else if (A[i]==2)
			frek2++;
		i++;
	}
	for (i=0;i<n;i++){
		
		if (A[i]==1){
			if (m==0){
				banyak++;
			}
			else
				m=m-1;
		}  	
		else if (A[i]==2){
			if (m+k==0){
				banyak++;
			}
			else{
				if (frek1>frek2)
					{
						k=k-1;
					}
				else{
					if (k>m)
						k=k-1;
					else if (m>k)
						m=m-1;
				}
			}
	}
}
cout<<banyak<<endl;
}
