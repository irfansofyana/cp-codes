#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,i,j;
ll A[1000005];

void isi(){
	A[1] = 2;
	for (i = 2 ; i <= 1000000 ; i++) {
		A[i] = A[i-1] + 3*i-1;
		A[i] %= 1000007;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> t;
	while (t--) {
		cin >> n;
		cout << A[n] << '\n';
	}
	return 0;
}