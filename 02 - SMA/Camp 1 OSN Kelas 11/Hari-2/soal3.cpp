#include <bits/stdc++.h>
using namespace std;

long long n,i,j,ans;
long long A[300005];

int main(){
	cin.tie(0);
	cin >> n;
	for (i = 0 ;i < n ;i++) {
		cin >> A[i];
	}
	sort(A,A+n);
	for (i = 0 ; i < n ; i++) {
		if (A[i]<(i+1)) ans+=(i+1)-A[i];
		else ans+=A[i]-(i+1);
	}
	cout << ans << endl;
	return 0;
}