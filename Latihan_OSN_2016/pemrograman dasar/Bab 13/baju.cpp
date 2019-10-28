#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	cout << fixed << showpoint  << setprecision(1) ;
	if (n%2==0) {
		cout << (A[(n/2)-1]+A[(n/2)])/2.0 << '\n';
	}
	else cout << (double)A[n/2] << '\n';
	return 0;
}