#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long x,y,n,m,i,j;
	long long A[10000];
	long long B[10000];
	
	A[0]=1;
	A[1]=1;
	A[2]=2;
	for (i=3;i<=10000;i++){
		A[i]=A[i-1]+A[i-2];
		if (A[i]>=10000)
			A[i]=A[i]%10000;
	}
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>x>>y;
		if (x<y)
			B[i]=0;
		else if (y==0)
			B[i]=A[x-2];
		else
			B[i]=A[x-y];
	}
	for (i=1;i<=n;i++)
		cout<<B[i]<<endl;
}
