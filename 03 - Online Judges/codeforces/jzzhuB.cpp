#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x,y,n;
	
	cin>>x>>y;
	cin>>n;
	long long A[n+2];
	A[1]=x;
	A[2]=y;
	for (long long  i=3;i<=n;i++)
		{
			A[i]=A[i-1]-A[i-2];
			A[i]=A[i]%1000000007;
		}
	cout<<A[n]<<endl;
}