#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

typedef int ll;

map<ll,ll> mep1, mep2;
ll n;
ll ans, A[2502], B[2502], C[2502], D[2502];

void fast_input(ll &bil) {
	bool neg = false;
	register ll c;
	bil = 0;
	c = getchar();
	if (c == '-') {
		neg = true;
		c = getchar();
	}
	for (; (c > 47 && c < 58); c = getchar())
		bil = 10*bil + c-48;
	if (neg) bil *= -1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	fast_input(n);
	for (int i = 0; i < n ; i++) {
		fast_input(A[i]); fast_input(B[i]); fast_input(C[i]); fast_input(D[i]);
	}
	for (int i = 0 ; i < n ; i++)
		for (int j = 0; j < n ; j++) 
			mep1[A[i] + B[j]]++;
	for (int i = 0 ; i < n ; i++)
		for (int j = 0 ; j < n; j++)
			mep2[C[i] + D[j]]++;
	for (auto a : mep1) {
		//cout << a.se << '\n';
		ans += (a.se*mep2[-a.fi]);	
	}
	cout << ans << '\n';
	return 0;
}