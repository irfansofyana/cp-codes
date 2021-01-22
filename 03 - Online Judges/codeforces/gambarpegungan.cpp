#include <bits/stdc++.h>
using namespace std;
int A[100];	

void pegunungan(int p){
	int i,j;
	if (p==1){
		cout<<'*'<<endl;	
	}
	else if (p==2){
		A[0]=1;
		A[1]=2;
		A[2]=1;
		for (i=0;i<3;i++){
			for (j=1;j<=A[i];j++)
				cout<<'*';
			cout<<endl;
		}
	}
	else{
		pegunungan(p-1);
		for (i=1;i<=p;i++){
			if (i!=p)
				cout<<'*';
			else
				cout<<'*'<<endl;
		}
		pegunungan(p-1);
	}
}
int main(){
	int n,i,j;
	cin>>n;
	pegunungan(n);
	return 0;
}
