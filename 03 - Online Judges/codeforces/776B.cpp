#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

int n;
bitset<100005> bs;

void sieve(){
	bs.set();
	bs[0] = bs[1] = false;
	for (ll i = 2; i <= 100001; i++) {
		if (bs[i]) {
			for (ll j = i * i ; j <= 100001; j+=i) 
				bs[j] = false;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	if (n <= 2) {
		if (n == 2) {
		cout << 1 << '\n';
		cout << 1 << " " << 1 << '\n';}
		else {
			cout << 1 << '\n';
			cout << 1 << '\n';
		}
	}
	else {
		sieve();
		cout << 2 << '\n';
		for (int i = 1; i <= n ; i++) {
			if (bs[i+1]) cout << 1;
			else cout << 2;
			cout << (i == n ? '\n' : ' ');
		}
	}
	return 0;
}
