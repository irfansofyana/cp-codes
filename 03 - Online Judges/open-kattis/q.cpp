#include <bits/stdc++.h>
using namespace std;

int n,t,i,j;
int sum;
int A[55];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> t;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i];
	}
	for (i = 0 ; i < n ; i++) {
		sum += A[i];
		if (sum>t) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << n << '\n';
	return 0;
}