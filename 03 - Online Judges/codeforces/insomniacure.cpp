#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,l,m,n;
	int d;
	int banyak=0,i;
	int A[100000];
	
		
	cin>>k;
	cin>>l;
	cin>>m;
	cin>>n;
	cin>>d;
		
	for (i=1;i<=d;i++)
		A[i]=i;
	
	for (i=1;i<=d;i++){
		if (A[i]%k==0)
			A[i]=0;
		else if (A[i]%l==0)
			A[i]=0;
		else if (A[i]%m==0)
			A[i]=0;
		else if (A[i]%n==0)
			A[i]=0;
		if (A[i]==0)
			banyak++;
	}
	printf("%d\n",banyak);
}