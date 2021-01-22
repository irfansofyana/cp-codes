#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long t,k,i,j,ans;
long long a,b,temp;
long long A[100005],prefix[100005];

int main(){
	cin.tie(0);
	cin >> t >> k;
	for (i = 1 ; i<=k-1 ; i++) 
		A[i] = 1;
	A[k] = 2;
	for (i = k+1 ; i<=100000 ; i++) {
		A[i] = (A[i-1]+A[i-k])%mod;
	}
	for (i = 1 ; i<= 100000 ; i++) {
		prefix[i] = prefix[i-1]+A[i];
	//	prefix[i]%mod;
	}
	while(t--) {
		cin >> a >> b;
		ans = prefix[b]-prefix[a-1];
		ans %= mod;
		cout << ans << endl;
	}
	return 0;
}