#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll a,b,c;
ll A[5];

int main(){
	OPTIMASI
	cin >> a >> b >> c;
	A[0] = 2*(a+b);
	A[1] = a+b+c;
	A[2] = b+c+c+b;
	A[3] = a+c+c+a;
	ll ans = 1e15;
	for (int i = 0 ; i < 4 ; i++) {
		ans = min(ans,A[i]);
	}
	cout << ans << '\n';
	return 0;
}