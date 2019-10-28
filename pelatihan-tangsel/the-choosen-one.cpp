//
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
typedef long long LL;

int n;
LL ar[N];
LL lr[N], rl[N];
LL x;

int main(){
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> ar[i];
	
	if (n == 1) {
		cout << ar[1]+1 << "\n";
		return 0;
	}
	
	lr[1] = ar[1];
	rl[n] = ar[n];
	for (int i = 2; i <= n; ++i) lr[i] = __gcd(ar[i], lr[i-1]);
	for (int i = n-1; i > 0; --i) rl[i] = __gcd(ar[i], rl[i+1]);
	
	for (int i = 1; i <= n; ++i){
		x = 0;
		if (i > 1) x = lr[i-1];
		if (i < n) x = __gcd(x, rl[i+1]);
		if (ar[i]%x != 0) {
			cout << x << "\n";
			return 0;
		}
	}
}