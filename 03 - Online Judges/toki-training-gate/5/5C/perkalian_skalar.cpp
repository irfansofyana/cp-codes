#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
long long A[10005],B[10005];
long long ans;

bool comp(long long a,long long b){
	return a>b;
}

int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++)	cin>>A[i];
	for (i=0;i<n;i++)	cin>>B[i];
	sort(A,A+n);
	sort(B,B+n,comp);
	for (i=0;i<n;i++) 
		ans+=A[i]*B[i];
	cout<<ans<<endl;
}
