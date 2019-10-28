#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	ll mini = min(a, b);
	ll res = 1;
	for (ll i = 1 ; i <= mini; i++) {
		res *= (ll)i;
	}
	cout << res << '\n';
	return 0;
}