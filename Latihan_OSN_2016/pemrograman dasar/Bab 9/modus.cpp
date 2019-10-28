#include <bits/stdc++.h>
using namespace std;

int A[1005];
int n,i,j;

int main(){
	cin >> n;
	for (i = 0 ; i < n; i++) {
		cin >> j;
		A[j]++;
	}
	int maks,ans;
	for (i = 1000 ; i >= 1 ; i--) {
		if (i==1000) {
			maks = A[i]; ans = i;
		}
		else {
			if (A[i] > maks) {
				maks = A[i]; ans = i;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}