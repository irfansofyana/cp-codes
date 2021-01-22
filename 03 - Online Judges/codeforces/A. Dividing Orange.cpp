#include <bits/stdc++.h>
using namespace std;
long long n,k,i,j,l,banyak=0;
int A[10000];
int jawaban[10000];
int main(){
	
	cin>>n>>k;
	for (i=1;i<=n*k;i++){
		jawaban[i]=i;
	}
	for (i=1;i<=k;i++){
		cin>>A[i];
		jawaban[A[i]]=0;
	}
	for (i=1;i<=k;i++){
		cout<<A[i]<<" ";
		j=2;
		banyak=2;
		while (banyak<=n){
			if (jawaban[j]!=0){
				if (banyak==n){
					cout<<jawaban[j]<<endl;
					jawaban[j]=0;
				}	
				else{
					cout<<jawaban[j]<<" ";
					jawaban[j]=0;
				}
				banyak++;
			}
			j++;
		}
	}	
}
