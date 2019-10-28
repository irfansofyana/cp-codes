#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long A[1000];
	long long a,b,c,n;
	long long i;
	
	cin>>a>>b>>c>>n;
	A[1]=a;
	A[2]=b;
	A[3]=c;
	for (i=4;i<=n;i++){
		A[i]=A[i-1]+A[i-2]+A[i-3];
	}
	cout<<A[n]<<endl;
}
