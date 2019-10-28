#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,b,sum,i;
ll A[20005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> b;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	for (i = n-1 ; i >= 0 ; i--) {
		sum += A[i];
		if (sum >= b) {
			cout << n-i << '\n';
			return 0;
		}
	}
	return 0;
}