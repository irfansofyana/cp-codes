#include <bits/stdc++.h>
using namespace std;

int n,i,j,tc;
int sum,A[1005],B[1005];

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n;
		sum = 0;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		for (i = 0 ; i < n ; i++) cin >> B[i];
		for (i = 0 ; i < n ; i++) 
			sum+=A[i]*B[i];
		cout << sum << endl;
	}
	return 0;
}