#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int tc;
int A[100];

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		sort(A,A+n);
		cout << "Case " << ++tc << ": " << A[(n-1)/2] << endl;
	}
	return 0;
}