#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int A[60];

int main() {
	cin >> n >> k;
	for (i=0;i<n;i++) cin >> A[i];
	if (k>n) cout << -1 << endl;
	else {
		sort(A,A+n);
		cout << A[n-k] << " "<< 0 << endl;
	}
	return 0;
}
