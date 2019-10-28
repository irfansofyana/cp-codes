#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,i;
	int banyak=0,x;
	int frek1,frek2;
	
	cin>>n>>m>>k;
	i=0; 
	while (i<n){
		cin>>x;
		if (x==1){
			if (m==0)
				banyak++;
			else
				m=m-1;
		}
		else if (x==2){
			if (k+m==0)
				banyak++;
			else{
				if (k==0)
					m=m-1;
				else
					k=k-1;
			}
		}
		i++;
	}
	cout<<banyak<<endl;
}
