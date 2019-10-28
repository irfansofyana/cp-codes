#include <bits/stdc++.h>
using namespace std;

int n,k,i;
int A[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	k--;
	cout << A[k] << '\n';
	return 0;
}