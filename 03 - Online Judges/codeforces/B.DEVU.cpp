#include <bits/stdc++.h>
using namespace std;

long long n,x,i,j;
long long A[100010];
bool udah=false;
int main(){
	cin>>n>>x;
	for (i=0;i<n;i++) cin>>A[i];
	sort(A,A+n);
	j=0;
	for (i=0;i<n;i++){
		if (x==1) udah=true; 
		j+=A[i]*x;
		if (!udah) x--;
	}
	cout<<j<<endl;
}