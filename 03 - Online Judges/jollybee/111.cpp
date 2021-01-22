#include <bits/stdc++.h>
using namespace std;

int t,n,i;
int A[10005];

int main(){
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> A[i];
			A[i]*=-1;
		}
		sort(A,A+n);
		for (i = 0 ; i < n ; i++) {
			cout << -1*A[i];
			cout << (i==n-1?'\n':' ') ;
		}
	}
	return 0;
}