#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int A[200005];

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		A[j] = i;
	}
	long long ans = 0;
	for (i = 1 ; i < n ; i++) {
		ans += abs(A[i]-A[i+1]);
	}
	cout << ans << '\n';
	return 0;
}