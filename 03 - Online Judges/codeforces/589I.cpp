#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,k,i,j;
int A[105];

int main(){
	OPTIMASI
	cin >> n >> k;
	j = n/k;
	for (i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		A[x]++;
	}
	int ans = 0;
	for (i = 1 ; i <= k ; i++) {
		if (A[i]<j) ans += j-A[i];
	}
	cout << ans << '\n';
	return 0;
}