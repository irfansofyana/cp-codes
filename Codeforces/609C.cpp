#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int A[100005],B[100005];
int a,b;

int main(){
	OPTIMASI
	cin >> n;
	int sum = 0;
	for (i = 0 ; i < n ; i++){
		cin >> A[i];
		sum += A[i];
	}
	a = sum/n; b = sum-a*n;
	for (i = 0 ; i < n ; i++) B[i] = a;
	for (i = 0 ; i < b ; i++) B[i]++;
	sort(A,A+n); sort(B,B+n);
	int ans = 0;
	for (i = 0 ; i < n ; i++) {
		if (A[i]>B[i]) ans += A[i]-B[i];
	}
	cout << ans << '\n';
	return 0;
}