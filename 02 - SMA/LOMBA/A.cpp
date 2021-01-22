#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll A[66];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	A[0] = 1;
	for (i = 1 ; i <= 60 ; i++) {
		if (i%2==1) A[i] = 2*A[i-1];
		else A[i] = A[i-1]+1;
	}
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> m;
		cout << A[m] << '\n';
	}
	return 0;
}