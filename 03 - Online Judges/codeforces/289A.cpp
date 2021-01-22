#include <bits/stdc++.h>
using namespace std;

long long n,k,i,j;
long long A[100005],B[100005];
long long sum;

int main(){
	cin.tie(0);
	cin >> n >> k;
	for (i=1;i<=n;i++) {
		cin >> A[i] >> B[i];
		sum+=B[i]-A[i]+1;
	}
	sum%=k;
	cout << (k-sum)%k << endl;
}
