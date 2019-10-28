#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,tmp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		if (n == 0) return 0;
		if ((ll)sqrt(n)*(ll)sqrt(n) == n) {
			if (n%2 == 1)
				cout << 1 << " " << (ll)sqrt(n) << '\n';
			else 
				cout << (ll)sqrt(n) << " " << 1 << '\n';
		}
		else {
			tmp = (ll)sqrt(n)*(ll)sqrt(n);
			if (tmp%2 == 1) {
				if (n-tmp <= (ll)sqrt(n) + 1) {
					cout << n-tmp << " " << (ll)sqrt(n) + 1 << '\n';
				}
				else {
					cout << (ll)sqrt(n)+1 << " " << (ll)sqrt(n) + 1 - (n-(tmp + (ll)sqrt(n)+1)) << '\n';
				}
			}
			else {
				if (n-tmp <= (ll)sqrt(n) + 1) {
					cout << (ll)sqrt(n) + 1 << " " << n-tmp << '\n';
				}
				else {
					cout << (ll)sqrt(n) + 1 - (n-(tmp+(ll)sqrt(n) + 1)) << " " << (ll)sqrt(n) + 1 << '\n';
				}
			}
		}
	}
	return 0;
}