#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int A[100005];
int sum,maks;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i];
		A[i] -= k;
	}
	for (i = 0 ; i < n ; i++) {
		sum += A[i];
		if (sum<0) {
			sum = 0;
		}
		maks = max(sum,maks);
	}
	cout << maks << '\n';
	return 0;
}