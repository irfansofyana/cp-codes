#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, k;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	ll q = n/k;
	q++;
	if (k*(q-1) > n) cout << k*(q-1) << '\n';
	else cout << k*q << '\n';
	return 0;
}