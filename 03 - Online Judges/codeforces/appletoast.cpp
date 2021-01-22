#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,j,temp,min,t,jum=0,jumlah=0,x,k;
	long long A[300001];
	
	cin>>n;
	for (i=0;i<=n-1;i++){
		cin>>A[i];
		jum+=A[i];
	}
	sort(A,A+n);
	x=0;
	k=0;
	while (jum>0)
		{
			jumlah=jumlah+jum+x;
			jum=jum-A[k];
			x=A[k];
			k=k+1;
		}
	cout<<jumlah<<endl;
}