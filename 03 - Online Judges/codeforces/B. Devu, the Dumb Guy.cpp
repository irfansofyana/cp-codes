#include <bits/stdc++.h>
using namespace std;

long long n,x,i,j;
long long A[100010];

int main(){
	cin>>n>>x;
	for (i=0;i<n;i++) cin>>A[i];
	sort(A,A+n);
	j=0;
	for (i=0;i<n;i++){
		j+=A[i]*x;
		x--;
	}
	cout<<j<<endl;
}