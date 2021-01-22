#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
using namespace std;

int n,i,j;
int A[100005];

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i];
	}
	sort(A,A+n);
	j = 1000000000;
	for (i = 0 ; i<(n/2); i++) {
		j = min(j,A[i]+A[n-1-i]);
	}
	cout << j << '\n';
	return 0;
}