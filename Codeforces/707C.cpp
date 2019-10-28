#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	//n^2 + m^2 = k^2
	if (n%2 == 1) {
		if (n == 1) {
			cout << -1 << '\n';
			return 0;
		}
		n*=n;
		cout << (n+1)/2 << " " << ((n+1)/2) - 1 << '\n';
		return 0;
	}
	else {
		if (n == 2) {
			cout << -1 << '\n';
			return 0;
		}
		n *= n;
		cout << (2 + (n/2))/2 << " " << ((2 + (n/2))/2) - 2 << '\n';
		return 0;
	}
	return 0;
}