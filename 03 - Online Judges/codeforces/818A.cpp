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
	ll tmp = 2*(k + 1);
	ll d = n/tmp;
	cout << d << " " << d*k << " " << n-(d + d*k) << '\n';
	return 0;
}